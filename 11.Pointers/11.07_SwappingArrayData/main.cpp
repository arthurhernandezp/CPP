#include <iostream>
#include <iomanip>
int main(){
    
    int array0[]{ 1,2,3,4,5,6 };
    int array1[]{ 7,8,9,10,11,12 };

    //Imprimindo o array 0
    std::cout << "Imprimindo o array 0 : ";
    for( auto & i : array0 ){
        std::cout << std::setw(2) << i << ' ';
    }
    //Imprimindo o array 1
    std::cout << '\n';
    std::cout << "Imprimindo o array 1 : ";
    for( auto & i : array1 ){
        std::cout << std::setw(2) << i << ' ';
    }
    /*
    {//Pior jeito de fazer o swap, copia desnecessaria de dados
        int array_temp[6]{};
        
        //Movendo os dados do array 0 para o array_temp
        for( size_t i{0}; i < 6 ; ++i ){
            array_temp[i] = array0[i];
        }
        //Movendo os dados do array 1 para o array 0
        for( size_t i{0}; i < 6 ; ++i ){
            array0[i] = array1[i];
        }
        //Movendo os dados do array_temp para o array 1
        for( size_t i{0}; i < 6 ; ++i ){
            array1[i] = array_temp[i];
        }

    }
    */

    /*
    {//Segunda forma de fazer o swap usando ponteiros, mais eficiente que a primeira forma
    //Porém somente os ponteiros estão com as informações trocadas
        std::cout << '\n';
        int * p_array0 {array0}; // p_array0 aponta para array0
        int * p_array1 {array1}; // p_array1 aponta para array1
        int * p_temp{nullptr};

        p_temp = p_array0;
        p_array0 = p_array1;
        p_array1 = p_temp;

        //Imprimindo o array 0
        std::cout << "Imprimindo o array 0 : ";
        for(size_t i{0} ; i < std::size(array0) ; ++i ){
            std::cout << std::setw(2) << p_array0[i] << ' ';
        }
        //Imprimindo o array 1
        std::cout << '\n';
        std::cout << "Imprimindo o array 1 : ";
        for(size_t i{0} ; i < std::size(array1) ; ++i ){
            std::cout << std::setw(2) << p_array1[i]  << ' ';
        }
    }
    */

    /*
    {//Terceira forma usando XOR, individualmente em cada elemento do array
        std::cout << '\n';
        for(size_t i{0} ; i < std::size(array0) ; ++i ){
            array0[i] ^= array1[i];
            array1[i] ^= array0[i];
            array0[i] ^= array1[i];
        }
        //Imprimindo o array 0
        std::cout << "Imprimindo o array 0 : ";
        for( auto & i : array0 ){
            std::cout << std::setw(2) << i << ' ';
        }
        //Imprimindo o array 1
        std::cout << '\n';
        std::cout << "Imprimindo o array 1 : ";
        for( auto & i : array1 ){
            std::cout << std::setw(2) << i << ' ';
        }
    }
    */
    return 0;
}