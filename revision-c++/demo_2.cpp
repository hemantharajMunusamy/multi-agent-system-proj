#include <iostream>

// Write a program inputs a string from the keyboard and echoes it to the screen along with
// the length of the string. The program loops until the string is ‘0’

int main() {
    
    std::string input;

    while(true) {
        getline(std::cin, input);
        if(input == "0") {
            break;
        }
        std::cout << input << " -> " << input.size() << std::endl; 
    }
}