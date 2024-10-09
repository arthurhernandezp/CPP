#include <iostream>


int main(){
    
    //if sem inicializar a variavel
    /*
    int speed {10};
    bool go {false};

    if(go){
        std::cout << "O valor de speed e: " << speed << '\n';
        if(speed > 5){
            std::cout << "Va mais devagar" << '\n';
        }else{
            std::cout << "Tudo certo!" << '\n';
        }
    }else{
        std::cout << "O valor de speed e: " << speed << '\n';
        std::cout << "Pare!" << '\n';
    }
    
    std::cout << "O valor de speed fora do bloco if : " << speed << '\n';
    */

    //if com inicialização
    // A memoria de speed será liberada após o fim do escopo do if
    // Muito útil para variavels randomicas que são usadas apenas dentro daquele if

    bool go {false};
    //if( inicialização; (condição) )
    if(int speed {10}; go){
        std::cout << "O valor de speed e: " << speed << '\n';
        if(speed > 5){
            std::cout << "Va mais devagar" << '\n';
        }else{
            std::cout << "Tudo certo!" << '\n';
        }
    }else{
        std::cout << "O valor de speed e: " << speed << '\n';
        std::cout << "Pare!" << '\n';
    }
    
    //std::cout << "O valor de speed fora do bloco if : " << speed << '\n'; #Dará error
    return 0;
}