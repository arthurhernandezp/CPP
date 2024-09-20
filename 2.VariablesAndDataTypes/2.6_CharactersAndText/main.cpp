#include <iostream>

int main(){
    //Declarando caracters
    char c1{'a'};
    char c2{'b'};
    char c3{'c'};
    char c4{'d'};
    char c5{'e'};
    //Imprimindo caracters
    std::cout << "c1: " << c1 << '\n';
    std::cout << "c2: " << c2 << '\n';
    std::cout << "c3: " << c3 << '\n';
    std::cout << "c4: " << c4 << '\n';
    std::cout << "c5: " << c5 << '\n';

    //1 Byte na memoria - Valores entre [0 - 255] --- ( 2 ^ 8 ) = 256 sendo 8 bits = 1 byte
    std::cout << "sizeof char: " << sizeof(char) << "byte." << '\n';

    char codigo = 65; // Código ASCII para o caracter 'A'
    std::cout << "codigo: " << codigo << '\n';
    std::cout << "codigo com cast para int: " << static_cast<int>(codigo) << '\n'; // Converter char para int 

    return 0;
}