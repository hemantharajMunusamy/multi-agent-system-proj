#include <string>
#include <iostream> // contains cout, cin, endl, ...

// Standard header files put identifiers in a namespace block called "std"
// If you want to use an identifier from  a header file, it isn't enough to include the header file, you can also need to tell the compiler that 
// you are using identifiers from the namespace block.

void block_example() {
    {
        int i = 0; // An identifier has scope in the block in which it is declared.
        i += 1;
        std::cout << "Value of i " << i << std::endl;
    }

    int i = 10;
    std::cout << "Value of i " << i << std::endl;

    {
        std::cout << "Value of i before override " << i << std::endl;
        int i = 100;
        std::cout << "Value of i in inner block " << i << std::endl;
    }
    std::cout << "Value of i in outer block " << i << std::endl;
}

void cin_example() {
    // cin links to the input stream and >> (extraction operator) called 'get from'
    // cin has default formatting depending on the variable type

    int b;

    std::cin >> b;

    std::cout << "From console " << b << std::endl;

    std::string anotherName;
    std::cout << "Enter the name: " << std::endl;
    std::cin.ignore(); // to consume the trailing newline character
    std::getline(std::cin, anotherName);
    std::cout << "Hello " << anotherName << std::endl;

}

void cout_example() {
    // cout links to the output stream and << (insertion operator) called 'put to'
    std::cout << 4 << std::endl;
    
    int a = 4;
    std::cout << a << std::endl;
    
    std::cout << "Hello" << std::endl;

    std::cout << "Hello" << 4 <<  a << std::endl;
}

void string_example() {
    //Strings 
    std::string name;
    name = "John";
    std::cout << name + " Smith" << std::endl;
}

int main() {
    
    //string_example();

    //cout_example();

    //cin_example();

    block_example();
}
