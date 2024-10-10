#include <iostream>
#include <iomanip>
int main(){
     
    // Declaração de um array 2d, dessa forma terá lixo no espaço alocado  ##  NÃO É SEGURO ####

    int array2d [3][2]; //Matriz 3x2

    // Lendo dados da matriz 3x2
    std::cout << "Imprimindo a matriz 3x2 com lixo !" << '\n';
    for( size_t i {0} ; i < 3 ; ++i ){ // Loop para as linhas

        for( size_t j {0} ; j < 2 ; ++j ){ // Loop para as colunas
            std::cout << "array2d[" << i << "][" << j << "] : "<< array2d[i][j] << '\n'; // Jogará no console lixo
        }

    }
    //Primeira Declaração e inicialização segura de um array 2d
    int array2d_seguro[3][2] {
        {1,2},
        {3,4},
        {5,6},
    };
    
    // Lendo dados da matriz 3x2
    std::cout << '\n';
    std::cout << "Imprimindo a matriz [3x2] !" << '\n';
    for( size_t i {0} ; i < std::size(array2d_seguro) ; ++i ){ // Loop para as linhas

        for( size_t j {0} ; j < std::size(array2d_seguro[i]) ; ++j ){ // Loop para as colunas
            std::cout << '[' << array2d_seguro[i][j] << ']' << ' '; 
        }
        std::cout << '\n';
    }

    //3D arrays
    // 3 quartos por ap, 5 aps por andar 7 andares no predio

    int house_block [7] [5] [3] {
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
             {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
        },
        {
             {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75} 
        },
        {
            {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}  
        },
        {
             {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105} 
        }
    };

    std::cout << '\n';
    for(size_t i{0}; i < std::size(house_block) ; ++i){

        for(size_t j{0} ; j < std::size(house_block[i]) ; ++j){
            std::cout << '(';
            for(size_t k{0} ; k < std::size(house_block[i][j]) ; ++k){

                std::cout << std::setw(3) << house_block[i][j][k] << " ";
            }
            std::cout << ") , ";
        }
        std::cout << '\n';

    }

    return 0;
}


