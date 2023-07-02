#include <iostream>
#include <fstream>

struct Environment  {
    char array[1'000'000] { 0 };
    char* cell = array;
    char* instruction = 0;
};

void go_to_closing_bracket(Environment &env) {
    int balance = 1;
    do {
        env.instruction++;
        if (*env.instruction == '[') {
            balance++;
        }
        else if (*env.instruction == ']') {
            balance--;
        }
    } while (balance != 0);
}

void go_to_opening_bracket(Environment &env) {
    int balance = 0;
    do {
        if (*env.instruction == '[') {
            balance++;
        }
        else if (*env.instruction == ']') {
            balance--;
        }
        env.instruction--;
    } while (balance != 0);
}

int interpret(std::string code, Environment &env) {
    if (code == "") return -2;
    
    for (env.instruction = code.data(); env.instruction < &code[code.length()-1]; env.instruction++) {
        switch (*env.instruction) {
            case '<': 
                if (env.cell == env.array) return -1;
                env.cell--;
                break;
            case '>':
                if (env.cell == &env.array[1'000'000]) return -1;
                env.cell++;
                break;
            case '+':
                (*env.cell)++;
                break;
            case '-':
                (*env.cell)--;
                break;
            case '.':
                std::cout << *env.cell;
                break;
            case '[':
                if (*env.cell == 0) go_to_closing_bracket(env);
                break;
            case ']':
                if (!*env.cell == 0) go_to_opening_bracket(env);
                break;

        }
    }
    return 0;
}

int main(int argc, char** argv) {
    if (argc <= 1) {
        std::cout << "Usage: `./imvuck filename`" << std::endl;
        return -3;
    }

    Environment env;
    std::string line;
    std::string code;
    std::ifstream file; 
    file.open(argv[1]);

    if (!file.is_open()) {
        std::cout << "Error while reading the file." << std::endl;
        return -4;
    }

    while (std::getline(file, line)){
        code += line;
    }

    int exit_status = interpret(code, env);
    
    switch (exit_status) {
        case 0:
            return 0;
        case -1:
            std::cout << "Index out of range." << std::endl;
            return -1;
        case -2:
            std::cout << "Empty file." << std::endl;
            return -2;
    }
}
