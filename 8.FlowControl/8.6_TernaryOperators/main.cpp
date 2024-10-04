#include <iostream>

int main(){
    
    int max{};
    int a{32};
    int b{12};

    std::cout << '\n';
    std::cout << "Usando if tradicional" << '\n';

    if( a > b ){
        max = a;
    }else{
        max = b;
    }

    std::cout << "O valor de max e: " << max << '\n';

    std::cout << '\n';
    std::cout << "Usando operador ternario" << '\n';

    int resultado = (a > b) ? a : b;
    
    std::cout << "O resultado e: " << resultado << '\n';

    return 0;
}