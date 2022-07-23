#include<iostream>
#include<fstream>

using std::endl;

int main(int argc, char** argv){
    int arr[199] = { 0 };
    int index = 99;
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
    for(char op : code){
        switch(op){
            case '+':
                arr[index] += 1;
                break;
            case '-':
                arr[index] -= 1;
                break;
            case '>':
                index += 1;
                break;
            case '<':
                index -= 1;
                break;
            case '.':
		std::cout << (char)arr[index];
        }
    }
    return 0;
}
