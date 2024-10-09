#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Pare" << '\n';
    }else{
        std::cout << "Avance" << '\n';
    }

    if(green_light){
        std::cout << "A luz é verde" << '\n';
    }else{
        std::cout << "A luz nao e verde" << '\n';
    }

    //Size of boolean

    std::cout << "Bool: " << sizeof(bool) << " byte.\n";

    //Imprimindo um bool

    //1 -> true
    //0 -> false

    std::cout << '\n';
    std::cout << "Red light: " << red_light << '\n';
    std::cout << "Green light: " << green_light << '\n';

    std::cout << '\n';
    std::cout << std::boolalpha;
    std::cout << "Red light: " << red_light << '\n'; // Irá imprimir true
    std::cout << "Green light: " << green_light << '\n'; // Vai imprimir false

    return 0;
}