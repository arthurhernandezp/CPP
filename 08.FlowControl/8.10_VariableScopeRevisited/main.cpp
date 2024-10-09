#include <iostream>

int main(){
    
    bool verde {false};

    if(verde){
        int numero_de_carros{23};
        std::cout << "A luz esta verde: " << numero_de_carros << " no sinal" << '\n';
    }else{
        //numer_de_carros não é vista aqui
        std::cout << "A luz nao esta verde" << '\n';
    }

    return 0;
}
