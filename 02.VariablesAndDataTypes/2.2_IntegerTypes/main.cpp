#include <iostream>

int main(){
    
    //Braced initializers

    //Variavel que pode estar com lixo. WARNING
    int elefantes_contagem;

    int leao_contagem{}; //Inicialização automatica com 0

    int cachorro_contagem{10}; //Inicialização com 10

    int gato_contagem{15}; //Inicialização com 15

    //Pode ser feita através de expressões tambem

    int animais_contagem{ cachorro_contagem + gato_contagem };

    //FUNCTIONAL INITIALIZATION

    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    //Perda de informação, Pouco seguro comparado com as braced initializers
    int narrowing_conversion_funcional (2.9);
    //std::cout << "narrowing_conversion_funcional: " << narrowing_conversion_funcional;


    //Assignment notation

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9; //Results 2

    //Verificar tamanho com sizeof
    std::cout << "sizeof int: " << sizeof(int) << '\n';
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << '\n';

    return 0;
}