#include <iostream>

char array[1'000'000] { 0 };
char* pointer = array;

int interpret(std::string code) {
    for (char c : code) {
        switch (c) {
            case '<':
                if (pointer == array) return -2;
                pointer--;
                break;
            case '>':
                if (pointer == &array[1'000'000]) return -1;
                pointer++;
                break;
            case '+':
                *pointer += 1;
                break;
            case '-':
                *pointer -= 1;
                break;
            case '.':
                std::cout << *pointer;
                break;
            case '!':
                for (char ch : array) {
                    std::cout << ch;
                }
                break;
        }
    }
    return 0;
}

int main() {
    std::string code;
    std::cout << "> ";
    std::getline(std::cin, code);
    int exit_status = interpret(code);
    std::cout << std::endl;
    if (exit_status == 0) {
        return 0;
    }
    std::cout << exit_status << std::endl;
}