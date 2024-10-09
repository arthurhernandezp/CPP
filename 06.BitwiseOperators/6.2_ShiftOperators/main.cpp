#include <iostream>
#include <bitset>
int main(){
    //Mover bits (em 1) para direita signifca dividir por 2
    //Mover bits (em 1) para esquerda significa multiplicar por 2
    //!!! Somente se nenhum dos bits 1 for para fora do numero, caso aconteça terá perda de informação
    unsigned short int valor {0xff0u};

    std::cout << "sizeof short int: " << sizeof(unsigned short int) << '\n'; //16bits ou 2 bytes

    std::cout << "valor: " << std::bitset<16>(valor) << ", dec : " << valor << '\n';
    for(int i = 0 ; i < 8 ; i++){
        if( i <= 4 ){
            std::cout << "Movendo para esquerda os bits" << '\n';
            valor = static_cast<unsigned short int>(valor << 1);
            std::cout << "valor: " << std::bitset<16>(valor) << ", dec : " << valor << '\n';
        }else{
            //Ao chegar com i = 4 tem uma perda de informação ao mover o bit 1 na primeira posição para esquerda e ao mover para direita ele 
            //ele voltara como 0
            std::cout << "Movendo para direita os bits" << '\n';
            valor = static_cast<unsigned short int>(valor >> 1);
            std::cout << "valor: " << std::bitset<16>(valor) << ", dec : " << valor << '\n';
        }
    }

    return 0;
}