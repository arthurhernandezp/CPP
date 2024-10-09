#include <iostream>

int main(){

    //Declaração de um array
    //Esse tipo de declaração vai conter lixo no array
    int array1 [10];

    //Ler dados do array com lixo
    std::cout << "Lendo o array com lixo" << '\n';
    for(size_t i {0} ; i < 10 ; ++i){
        std::cout << "array1 [" << i << "] : " << array1[i] << '\n'; //Lixo
    }

    //Escrever dados no array
    for(size_t i {0} ; i < 10 ; ++i){
        array1[i]  = i; 
    }
    // [0,1,2,3,4,5,6,7,8,9]
    std::cout << '\n';
    //Ler dados do array sem ter lixo 
    std::cout << "Lendo o array sem lixo!" << '\n';
    for(size_t i {0} ; i < 10 ; ++i){
        std::cout << "array1 [" << i << "] : " << array1[i] << '\n'; 
    }    
    
    return 0;
}