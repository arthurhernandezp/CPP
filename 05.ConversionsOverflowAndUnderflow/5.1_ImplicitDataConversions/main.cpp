#include <iostream>

int main(){
    //Implicit Conversions

    // - O compilador aplica "implicit conversions" quando existes diferentes tipos numa expressão
    // - As "conversions" são sempre feitas do menor tipo para o maior em termos de bytes, por exemplo
    // um int(4 bytes) é transformado para double (8bytes) antes da realização da expressão. 

    double preco {25.5};
    int unidades {10};

    auto preco_total {preco * unidades}; // Convertido para double pelo compilador

    std::cout << "Preco total: " << preco_total << '\n';
    std::cout << "sizeof preco_total: " << sizeof(preco_total) << '\n';

    // Implicit conversions em assignments 

    int x;
    double y {45.74};
    x = y;

    std::cout << "O valor de y e: " << y << '\n';
    std::cout << "O valor de x e: " << x << '\n';
    std::cout << "sizeof x : " << sizeof(x) << '\n';
    std::cout << "sizeof de int : " << sizeof(int) << '\n';

    return 0;
}