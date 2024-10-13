#include <iostream>
#include <iomanip>

int main(){
    
    //Declaração e inicialização de ponteiros em C++

    int * p_number {}; // Será inicializado com nullptr
    double * p_double_number {};

    // Explicity incialização com nullptr

    int * p_number1 {nullptr};
    double * p_double_number1 {nullptr};

    //Ponteiros para diferentes variaveis possuem o mesmo tamanho

    std::cout << std::setw(27) << "sizeof(int) : " << sizeof(int) << " bytes" << '\n';           // 4
    std::cout << std::setw(27) << "sizeof(int*) : " << sizeof(int*) << " bytes" << '\n';            
    std::cout << std::setw(27) << "sizeof(double) : " << sizeof(double) << " bytes" << '\n';     // 8
    std::cout << std::setw(27) << "sizeof(double*) : " << sizeof(double*) << " bytes" << '\n';      
    std::cout << std::setw(27) << "sizeof(char) : " << sizeof(char) << " bytes" << '\n';         // 1
    std::cout << std::setw(27) << "sizeof(char*) : " << sizeof(char*) << " bytes" << '\n';
    std::cout << std::setw(27) << "sizeof(p_number1) : " << sizeof(p_number1) << " bytes" << '\n';
    std::cout << std::setw(27) << "sizeof(p_double_number1) : " << sizeof(p_double_number1) << " bytes" << '\n';

    // Não faz diferença colocar o * na esquerda, no meio ou na direita entre o tipo e o nome da variavel
    // Não resultará em erro de compilação, nem de execução
    int*  p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};

    //Trabalhando com ponteiros
    //Só é possivel um ponteiro apontar para outra variavel sem ambos forem do mesmo TIPO
    //Exemplo  int *p ----> int

    int var_int {44};
    int * p_int {&var_int}; // p_int está apontando para o endereço de memoria de var_int.  (&)
    int var_int2 {21};

    std::cout << '\n';
    std::cout << "p_int esta apontando para var_int" << '\n';
    std::cout << "Endereco de var_int : " << (&var_int) << " var_int : " << var_int << '\n';
    std::cout << "Endereco de var_int2 : " << (&var_int2) << " var_int2 : " << var_int2 << '\n';
    std::cout << std::setw(22) << "Endereco de p_int : " << p_int << std::setw(11) << " *p_int : " << *p_int << '\n';

    //Agora p_int irá apontar para var_int2
    p_int = &var_int2;
    
    std::cout << '\n';
    std::cout << "p_int esta apontando para var_int2" << '\n';
    std::cout << "Endereco de var_int : " << (&var_int) << " var_int : " << var_int << '\n';
    std::cout << "Endereco de var_int2 : " << (&var_int2) << " var_int2 : " << var_int2 << '\n';
    std::cout << std::setw(22) << "Endereco de p_int : " << p_int << std::setw(11) << " *p_int : " << *p_int << '\n';
    
    return 0;
}