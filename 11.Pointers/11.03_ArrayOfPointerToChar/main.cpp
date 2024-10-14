#include <iostream>

int main(){
    
    //Usando array de caracter multidimensional

    char times_de_futebol [][20]{   // Este array ocupará o numero de linhas x 20 bytes na memoria = 120
        "Flamengo",
        "Botafogo",
        "Fluminense",
        "Vasco",
        "Palmeiras",
        "Sao Paulo"
    };
    std::cout << "char times_de_futebol [][20]" << '\n';

    for(auto & equipe : times_de_futebol  ){
        std::cout << equipe << ' ';
    }
    std::cout << '\n';
    std::cout << "sizeof(time_de_futebol) : " << sizeof(times_de_futebol) << '\n';
    
    // Usando array de ponteros de caracter

    const char * times_de_futebol2[]{  // Este array só ocupará na memoria o que realmente for usado
        "Flamengo",
        "Botafogo",
        "Fluminense",
        "Vasco",
        "Palmeiras",
        "Sao Paulo"
    }; 
    std::cout << '\n';
    std::cout << "const char * times_de_futebol2[]" << '\n';
    for(auto & equipe : times_de_futebol  ){
        std::cout << equipe << ' ';
    }
    std::cout << '\n';
    std::cout << "sizeof(time_de_futebol2) : " << sizeof(times_de_futebol2) << '\n';
    
    return 0;
}