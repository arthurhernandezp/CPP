#include <iostream>

int main(){
    
    const int Caneta {10};
    const int Marca_Texto {20};
    const int Borracha {30};
    const int Retangulo {40};
    const int Circulo {50};
    const int Ellipse {60};

    int ferramenta_atual{33};

    switch (ferramenta_atual){
        case Caneta:
            std::cout << "Caneta" << '\n';
            break;
        case Marca_Texto:
            std::cout << "Marca_Texto" << '\n';
            break;
        case Borracha:
            std::cout << "Borracha" << '\n';
            break;
        case Retangulo:
            std::cout << "Retangulo" << '\n';
            break;
        case Circulo:
            std::cout << "Circulo" << '\n';
            break;
        case Ellipse:
            std::cout << "Ellipse" << '\n';
            break;
        default:
            std::cout << "Nenhuma ferramenta foi encontada!" << '\n';
            break;
    }

    return 0;
}