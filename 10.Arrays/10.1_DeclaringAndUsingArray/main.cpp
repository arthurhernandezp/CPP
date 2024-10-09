#include <iostream>

int main(){
    /*
    //Declaração do array
    //Dessa forma de declaração o array vai ter lixo na memoria
    int array1 [10];

    //Ler dados do array
    std::cout << '\n';
    std::cout << "Lendo array com lixo na memoria!" << '\n';
    for(size_t i {0} ; i < 10 ; ++i ){
        std::cout << "array1 [" << i << "] : " << array1[i] << '\n'; // Está lendo lixo
    }

    //Inserindo dados no array de 0 a 9
    for(size_t i {0} ; i < 10 ; ++i ){
        array1[i] = i;
    }
    
     //Ler dados do array
    std::cout << '\n';
    std::cout << "Lendo array de 0 a 9 sem lixo na memoria!" << '\n';
    for(size_t i {0} ; i < 10 ; ++i ){
        std::cout << "array1 [" << i << "] : " << array1[i] << '\n'; // Está lendo lixo
    }
    */

    /*
    //Declaração e inicialização ao mesmo tempo de forma segura!

    std::cout << '\n';
    std::cout << "Declaracao e inicializacao ao mesmo tempo!" << '\n';

    double salarios[5] {12.2,23.6,7.5,13.2,8.1};

    //Ler dados do array salarios
    for(size_t i{0}; i < 5 ; ++i){
        std::cout << "salarios [" << i << "] : " << salarios[i] << '\n';
    }
    */


    /*
    std::cout << '\n';
    std::cout << "Declaracao e inicializacao ao mesmo tempo porem sem inicializar todos os elementos!" << '\n';
    //Essa forma de inicialização ainda é segura, os elementos que não foram colocar entre as {} serão inicializados com 0
    double salarios2[5] {12.2,23.6,7.5};

    //Ler dados do array salarios
    for(size_t i{0}; i < 5 ; ++i){
        std::cout << "salarios2 [" << i << "] : " << salarios2[i] << '\n';
    }
    */


    /*
    // Outra forma de declarar e inicialziar um array sem dizer o tamanho do array

    int tamanho_ocultado [] {1,2,3,4,5,6};
    std::cout << "Imprimindo array sem tamanho definido de forma explicita!" << '\n';
    for(size_t i {0} ; i < 6 ; ++i){
        std::cout << "tamanho_ocultado [" << i << "] : " << tamanho_ocultado[i] << '\n';
    }
    */

    //Array de read-only, não é possivel alterar ao decorrer do código
    const int arrayx [] {1,2,3,4,5,6,7,8,9};
    //arrayx[0] = 10; # Error
    for( auto & i : arrayx ){
        std::cout << i << " ";
    }

    return 0;
}