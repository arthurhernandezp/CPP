#include <iostream>

int main(){
    
    // Verificação verbosa de nullptr com "if(!(p_numero==nullptr))"

        std::cout << '\n';
        std::cout << "Verificacao de nullptr" << '\n';

        int * p_numero{};   //Inicialização segura de ponteiro = nullptr
        p_numero = new int{44};
        if(!(p_numero==nullptr)){
            std::cout << "O ponteiro nao e nullptr e aponta para um endereco valido" << '\n';
            std::cout << "*p_numero : " << *p_numero << '\n';
        }else{
            std::cout << "O ponteiro e nullptr e aponta para um endereco invalido" << '\n';
        }    

    // Verificação de nullptr com  "if(p2_numero)"

        std::cout << '\n';
        std::cout << "Verificacao de nullptr" << '\n';

        int * p2_numero{};   //Inicialização segura de ponteiro = nullptr
        p2_numero = new int{144};
        if(p2_numero){// Esse if compara se p_numero é diferente de nullptr
            std::cout << "O ponteiro nao e nullptr e aponta para um endereco valido" << '\n';
            std::cout << "*p2_numero : " << *p2_numero << '\n';
        }else{
            std::cout << "O ponteiro e nullptr e aponta para um endereco invalido" << '\n';
        }

    delete p_numero; 
    p_numero = nullptr; 
    delete p2_numero;
    p2_numero = nullptr;
    return 0;
}