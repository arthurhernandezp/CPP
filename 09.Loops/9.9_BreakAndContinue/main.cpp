#include <iostream>

int main(){
    
    for( size_t i {0} ; i < 10 ; ++i ){
        if( i == 4 ){
            continue; // Quando i = 4 o loop irá parar esta etapa do loop e passar para a proxima ao encontrar "continue"
        }
        std::cout << "i : " << i << '\n';
    }
    std::cout << '\n';
    for( size_t i {0} ; i < 10 ; ++i ){
        if( i == 4 ){
            break; // Quando i = 4 o loop irá parar esta etapa do loop e passar para a proxima ao encontrar "continue"
        } 
        std::cout << "i : " << i << '\n';
    }

    return 0;
}