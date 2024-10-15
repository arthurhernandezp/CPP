#include <iostream>

int main(){
    
    int numeros[10]{11,12,13,14,15,16,17,18,19,20};

    int * ponteiro1 {&numeros[0]};
    int * ponteiro2 {&numeros[8]};
    
    std::cout << "Comparando ponteiros!" << std::boolalpha << '\n';
    std::cout << "ponteiro1 > ponteiro2  : " << (ponteiro1 > ponteiro2) << '\n';
    std::cout << "ponteiro1 < ponteiro2  : " << (ponteiro1 < ponteiro2) << '\n';
    std::cout << "ponteiro1 >= ponteiro2 : " << (ponteiro1 >= ponteiro2) << '\n';
    std::cout << "ponteiro1 <= ponteiro2 : " << (ponteiro1 <= ponteiro2) << '\n';
    std::cout << "ponteiro1 == ponteiro2 : " << (ponteiro1 == ponteiro2) << '\n';
    std::cout << "ponteiro1 != ponteiro2 : " << (ponteiro1 != ponteiro2) << '\n';

    return 0;
}