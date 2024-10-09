#include <iostream>

int main(){
    
    int vetor_de_inteiros [] {1,2,3,4,5,6,7,8,9,10};

    //Primeira forma do "for range loop", valor tem que ser do mesmo tipo dos elementos da coleção
    for(int valor : vetor_de_inteiros){
        std::cout << valor << " ";
    }

    std::cout << '\n';
    //Segunda forma do "for range loop"
    for(int valor : {1,2,3,4,5,6,7,8,9,10}){
        std::cout << valor << " ";
    }

    std::cout << '\n';
    //Terceira forma do "for range loop", o compilador decidirá o tipo de valor se baseando na coleção
    for( auto valor : {1,2,3,4,5,6,7,8,9,10} ){
        std::cout << valor << " ";
    }

    return 0;
}