#include <iostream>

int main(){

    int n1 {3};
    int n2 {5};

    bool resultado = ( n1 < n2 );

    std::cout << std::boolalpha; // Transforma o Output (1 ou 0)  ->  (true ou false)
    
    std::cout << "Resultado e: " << resultado << '\n';

    if(resultado == true){
        std::cout << n1 << " e menor que " << n2 << '\n';
    }else{
        std::cout << n1 << " e mais que " << n2 << '\n';
    }

    return 0;
}