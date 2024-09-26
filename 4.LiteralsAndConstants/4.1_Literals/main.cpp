#include <iostream>

int main(){
    
    //Literals tipos: u e l são usados para tipos unsigned e long.
    //1 BYTE
    unsigned char unsigned_char {53u};  // u está sendo usado no literal para indicar que é unsigned

    //2 BYTES
    short short_var {-3232};                    //Nada de especial nos literals
    short int short_int {323};                  //Nada de especial nos literals
    signed short signed_short {122};            //Nada de especial nos literals
    signed short int signed_short_int {-323};   //Nada de especial nos literals

    unsigned short int unsigned_short_int {34u};//u usado para dizer que é unsigned

    //4 BYTES
    const int int_var {31};             //
    signed signed_var {32};             //
    signed int signed_int {22};         //
    unsigned int unsigned_int {44u};    // u usado para dizer que é unsigned

    //4 BYTES OU 8 BYTES
    long long_var {44L};                //L usando para dizer que é long
    long int long_int {22L};
    signed long signed_long {32L};
    signed long int signed_long_int {12L};
    unsigned long int unsigned_long_int {444ul};

    long long long_long_var {33LL};
    long long int long_long_int {32LL};
    signed long long signed_long_long_var {3213LL};
    signed long long int signed_long_long_int {3213LL};

    //Agrupando numeros : C++ 14
    unsigned int preco {1'500'00'0u};
    std::cout << "O preco do produto e: " << preco << '\n';

    int cor{0xffffff};
    std::cout << std::hex << "Cor : " << cor << '\n';
    return 0;
}