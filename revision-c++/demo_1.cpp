//*************************
// C++ demo program 1
// To show:
//        Write a hello world program to allow the user to enter a person’s name,
//        then write to the screen: Hello <..name..>, welcome to my world!
//*************************
#include <iostream> 

int main() {
    std::string name;

    std::cout << "Enter your name: " << std::endl;
    
    std::getline(std::cin, name);

    std::cout << "Hello " << name << ", welcome to my world!" << std::endl;
}