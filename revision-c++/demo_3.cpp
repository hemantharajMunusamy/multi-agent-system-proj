// **************************
// C++ demo program 3
// To show:
//         use of functions (with a simple example of squaring a value)
//         parameters: pass by value, pass by address
// **************************

#include <iostream>

float SquarePassByValue(float);
void SquarePassByAddress(float, float *);

int main() {
    float value;
    float valueSquared;

    std::cout << "Please enter real number to be stored in the variable value ";
    std::cin >> value;
    std::cout << std::endl << "You entered "<< value << std::endl;

    valueSquared = SquarePassByValue(value);

    std::cout << "Value squared (using pass by value and function return value) is " << valueSquared << std::endl << std::endl;
    
    std::cout << "The function zeored the value you entered, but because it was pass by value, " << std::endl;

    std::cout << "This had no effect in main. Printing the original value now, it was: " << value << std::endl;

    SquarePassByAddress(value, &valueSquared);
    
    std::cout << "Value squared (using pass by address) is " << valueSquared << std::endl;
}

float SquarePassByValue(float v) {
    float vS;
    vS = v * v;
    v = 0; // you can modify v in this function, but in the calling routine v will not changed
    return vS;
}

void SquarePassByAddress(float v, float* vS) {
    *vS = (v * v);
}