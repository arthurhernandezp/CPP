#include <iostream>

int main(){
    
    int array1[] {1,2,3,4,5,6,7,8,9,0};

    for( size_t i{0} ; auto & item : array1 ){
        std::cout << "array1[" << i++ << "] : "<< item << '\n';
    }

    //Praticas que não são seguras, porém permitidas em C++

    //Lendo dado fora da área de memoria do array
    std::cout << "array1[12] : " << array1[12] << '\n';

    //Tentando mudar o dado de fora da area de array
    array1[12000000] = 1000;
    std::cout << "array1[12000000] : " << array1[12000000] << '\n';

    //O SO irá matar o programa pois está acessando áreas de memoria que não são permitidas 
    std::cout << "O programa não irá executar essa parte!" << '\n';
    
    return 0;
}