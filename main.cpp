#include<iostream>
#include<fstream>

using std::endl;

int arr[500] = { 0 };
int arr_index = 249;

void interpret(std::string code){
    int opindex = 0;
    std::string loop_body = "";
    int sindex = 0;
    for(char op : code){
            switch(op){
                case '+':
                    arr[arr_index] += 1;
                    break;
                case '-':
                    arr[arr_index] -= 1;
                    break;
                case '>':
                    arr_index += 1;
                    break;
                case '<':
                    arr_index -= 1;
                    break;
                case '[':
                    sindex = arr_index;
                    for(int copy_opindex = ++opindex; code[copy_opindex]!=']'; copy_opindex++){
                        loop_body += code[copy_opindex];
                    }
                    while(arr[sindex] != 1){
                        interpret(loop_body);
                    }
                case '.':
		            std::cout<< (char)arr[arr_index];
                    break;
        }
        opindex++;
    }
}

int main(int argc, char** argv){
    std::string code;
    if(argc > 1){
        std::string line;
        std::fstream file;
        file.open(argv[1], std::ios::in);
        if(file.is_open()){
            while(std::getline(file, line)){
                code += line;
            }
        }
        else{
            std::cout << "Error while reading file";
	    return 1;
        }
    }
    else{
	std::cout << "Put your code here: ";
        std::getline(std::cin, code);
    }
    interpret(code);
    return 0;
}
