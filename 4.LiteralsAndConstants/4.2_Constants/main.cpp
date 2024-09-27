#include <iostream>


int main(){
    
    const int idade {23};
    const float altura {1.74f};

    //const int n1; # Compiler error, é necessario inicializar a constante assim que declarar
    //idade = 24; #Compiler error
    //float = 1.75f #Compiler error
    //int * variavel_error = &idade;  #Compiler error, só é possivel realizar se idade fosse somente int e não const 
    //int & idade2 = idade; #Compiler error, não é possivel criar uma referencia para uma variavel constante
    const int & idade2 =  idade;

    int nascimento {2024 - idade};
    std::cout << "Idade2: " << idade2 << " endereco: "<< &idade2 <<'\n';
    std::cout << "Idade e: " << idade << " endereco: "<< &idade << '\n';
    
    std::cout << "Altura e: " << altura << '\n';
    std::cout << "Nascimento e: " << nascimento << '\n';

    return 0;
}