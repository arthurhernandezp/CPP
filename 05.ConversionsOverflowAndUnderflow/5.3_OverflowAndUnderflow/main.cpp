#include <iostream>

int main(){
    
    //Overflow

    unsigned char data {250}; // Uso de char para ter uma variavel de 1 byte ( 0 ate 255 )

    std::cout << "Data: " << static_cast<int>(++data) << '\n';      //251
    std::cout << "Data: " << static_cast<int>(++data) << '\n';      //252
    std::cout << "Data: " << static_cast<int>(++data) << '\n';      //253
    std::cout << "Data: " << static_cast<int>(++data) << '\n';      //254
    std::cout << "Data: " << static_cast<int>(++data) << '\n';      //255
    std::cout << "Data: " << static_cast<int>(++data) << '\n';      //0
    std::cout << "Data: " << static_cast<int>(++data) << '\n';      //1
    std::cout << '\n';

    //Underflow
    data = 2;
    std::cout << "Data: " << static_cast<int>(--data) << '\n';      //1
    std::cout << "Data: " << static_cast<int>(--data) << '\n';      //0
    std::cout << "Data: " << static_cast<int>(--data) << '\n';      //255
    std::cout << "Data: " << static_cast<int>(--data) << '\n';      //254
    std::cout << "Data: " << static_cast<int>(--data) << '\n';      //253
    std::cout << "Data: " << static_cast<int>(--data) << '\n';      //252
    std::cout << "Data: " << static_cast<int>(--data) << '\n';      //251
    
    return 0;
}