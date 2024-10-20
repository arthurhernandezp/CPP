#include <iostream>

int main(){
    
    // Declarando ponteiro e referencia
    int numero{123};
    int * p_numero{&numero};    // O ponteiro pode apontar para outro endereço ao longo da execução
    int& ref_numero{numero};    // Essa referencia tem que ser declarada e inicializada com um endereço valido e NÃO PODERÁ MUDAR AO LONGO DA EXECUÇÃO
    //Lendo os dados
    std::cout << '\n';
    std::cout << "numero : " << numero << '\n';
    std::cout << "&numero : " << &numero << '\n';
    std::cout << "*p_numero : " << *p_numero << '\n';
    std::cout << "p_numero : " << p_numero << '\n';
    std::cout << "ref_numero : " << ref_numero << '\n';
    std::cout << "&ref_numero : " << &ref_numero << '\n';
    std::cout << '\n';
    //Escrevendo atraves do ponteiro
    *p_numero = 12345;
    
    //Lendo os dados
    std::cout << "Escrevendo atraves do ponteiro (*p_numero = 12345)" <<'\n';
    std::cout << "numero : " << numero << '\n';
    std::cout << "&numero : " << &numero << '\n';
    std::cout << "*p_numero : " << *p_numero << '\n';
    std::cout << "p_numero : " << p_numero << '\n';
    std::cout << "ref_numero : " << ref_numero << '\n';
    std::cout << "&ref_numero : " << &ref_numero << '\n';
    std::cout << '\n';

    //Escrevendo atraves da referencia
    ref_numero = 10101010;

    //Lendo os dados
    std::cout << "Escrevendo atraves da referencia (ref_numero = 10101010)" << '\n';
    std::cout << "numero : " << numero << '\n';
    std::cout << "&numero : " << &numero << '\n';
    std::cout << "*p_numero : " << *p_numero << '\n';
    std::cout << "p_numero : " << p_numero << '\n';
    std::cout << "ref_numero : " << ref_numero << '\n';
    std::cout << "&ref_numero : " << &ref_numero << '\n';
    std::cout << '\n';

    return 0;
}