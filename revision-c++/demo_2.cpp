// ******************************
// C++ demo program 2 
// To show:
//         Write a program inputs a string from the keyboard and echoes it to 
//         the screen along with the length of the string. The program loops 
//         until the string is ‘0’
// ******************************
#include <iostream>

int main() {
    
    bool stopCondition = false;

    std::string input;
    
    while(!stopCondition) {
        getline(std::cin, input);
        if(input == "0") {
            stopCondition = true;
        } else {
            std::cout << input << " -> " << input.size() << std::endl; 
        }
    }
}