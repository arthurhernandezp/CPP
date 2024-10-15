#include <iostream>

int main(){
    
    int numeros[10]{1,2,3,4,5,6,7,8,9,10};

    //Notação de Pointer arithmetic 
    int * ponteiro1 {numeros + 0};      //Apontando para o elemento "1"
    int * ponteiro2 {numeros + 8};      //Apontando para o elemento "9"

    //Array index notation // Outra forma de inicializar o ponteiro usando o proprio array
    //    int * ponteiro1 {&numeros[0]};
    //    int * ponteiro2 {&numeros[8]};

    std::cout << "ponteiro1 - ponteiro2 : " << ponteiro1 - ponteiro2 << '\n';   //  8
    std::cout << "ponteiro2 - ponteiro1 : " << ponteiro2 - ponteiro1 << '\n';   // -8 

    //C++ oferece um tipo para guardar subtrações de ponteiros

    std::ptrdiff_t diferenca_positiva { ponteiro2 - ponteiro1 };
    std::ptrdiff_t diferenca_negativa { ponteiro1 - ponteiro2 };
    std::cout << "diferenca_negativa : " << diferenca_negativa << ", diferenca_positiva : " << diferenca_positiva << '\n';

    return 0;
}