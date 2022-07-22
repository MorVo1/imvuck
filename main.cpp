#include<iostream>
#include<fstream>

using std::endl;

int main(int argc, char** argv){
    int arr[200];
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
        }
    }
    else{
        std::getline(std::cin, code);
    }
    for(int arr_element : arr){
        arr_element = 0;
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
                std::cout << (char)arr[index] << endl;
        }
    }
    return 0;
}
