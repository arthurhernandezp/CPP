#include <iostream>

int main(){
    
    int n1{2};
    int n2{7};

    //Adição
    int resultado {n1 + n2};
    std::cout << n1 << " + " << n2 << " = " << resultado << '\n';

    //Subtração
    resultado = n1 - n2;
    std::cout << n1 << " - " << n2 << " = " << resultado << '\n';

    //Multiplicao
    resultado = n1 * n2;
    std::cout << n1 << " * " << n2 << " = " << resultado << '\n';

    //Divisão
    resultado = n1 / n2;
    std::cout << n1 << " / " << n2 << " = " << resultado << '\n';
    resultado = n2 / n1;
    std::cout << n2 << " / " << n1 << " = " << resultado << '\n';

    //Modulo ou resto
    resultado = n1 % n2;
    std::cout << n1 << " % " << n2 << " = " << resultado << '\n';
    resultado = n2 % n1;
    std::cout << n2 << " % " << n1 << " = " << resultado << '\n';

    return 0;
}