#include <iostream>

int main(){

    //Ferramentas
    const short int Caneta {10};
    const short int Marca_Texto {20};
    const short int Borracha {30};
    const short int Retangulo {40};
    const short int Circulo {50};
    const short int Ellipse {60};

    short int ferramenta_atual {Circulo};

    if(ferramenta_atual ==  Caneta){
        std::cout << "Desenha algo com a caneta" << '\n';
    }else if( ferramenta_atual == Marca_Texto ){
        std::cout << "Desenha com marca texto" << '\n';
    }else if(ferramenta_atual == Borracha){
        std::cout << "Apaga com a borracha" << '\n';
    }else if(ferramenta_atual == Retangulo){
        std::cout << "Desenha um retangulo" << '\n';
    }else if(ferramenta_atual == Circulo){
        std::cout << "Desenha um circulo" << '\n';
    }else if(ferramenta_atual == Ellipse){
        std::cout << "Desnha uma ellipse" << '\n';
    }

    return 0;
}