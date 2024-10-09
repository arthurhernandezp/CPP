#include <iostream>

//Variavel global
int var_global{2024};   // Permite acessar em qualquer área do código. Será liberada a memoria desta variavel quando o programa encerrar.

void funcao_teste();

int main(){
    std::cout << "Dentro do int main() testando a variavel global: " << var_global << '\n';
    
    int var_global{35};

    std::cout << "Dentro do int main() testando a variavel global: " << var_global << '\n';

    funcao_teste();
    return 0;
}

void funcao_teste(){
    int local_variavel{3};  //Só pode ser usada dentro desta função, e a sua memoria alocada será liberada no final do escopo desta função.
    static int static_variavel {40}; // duração: será liberada quando o programa terminar, acesso somente dentro do escopo que foi criada
    int * dinamica_variavel = new int(40); // voce decide quando será liberada, acesso somente dentro do escopo que foi criada

    std::cout << "Testando a variavel global dentro da funcao_teste: " << var_global << '\n';

    delete(dinamica_variavel); //liberando acesso da variavel;

}