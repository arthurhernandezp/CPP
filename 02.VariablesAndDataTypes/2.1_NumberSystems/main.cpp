#include <iostream>

int main(){
    int number1 = 15;   // Decimal
    int number2 = 017;  // Octal
    int number3 = 0x0f; // Hexadecimal
    int number4 = 0b00001111;   // Binario
    std::cout << "Number 1: " << number1 << '\n';
    std::cout << "Number 2: " << number2 << '\n';
    std::cout << "Number 3: " << number3 << '\n';
    std::cout << "Number 4: " << number4 << '\n';
    return 0;
}