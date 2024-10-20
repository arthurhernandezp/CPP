#include <iostream>
#include <iomanip>
int main(){

    // Declarando e inicializando o array
    int pontos[]{10,20,30,40,50,60,70,80};

    // Acessando os dados
    for(auto ponto : pontos){
        std::cout << ponto << ' ';   
    }

    // Tentando moficar usando auto ponto, dessa forma é ponto é uma COPIA do elemento selecionado e por isso só é modificado dentro do escopo
    
    std::cout << '\n';
    std::cout << std::setw(8) << "Copia" << std::setw(10) << "Original" << '\n';
    for(size_t i{0}; auto ponto : pontos){
        ponto /= 10;
        std::cout << std::setw(8) << ponto << std::setw(8) << pontos[i] << '\n';   
        ++i;
    }
    std::cout << '\n';
     // Acessando os dados
    for(auto ponto : pontos){
        std::cout << ponto << ' ';   
    }

    // Para modificar de fato é  necessario usar a referencia
    std::cout << '\n';
    std::cout << "Modificando de fato o array" << '\n';
    std::cout << std::setw(12) << "Referencia" << std::setw(12) << "Original" << '\n';

    for(size_t i{0}; auto & ponto : pontos){
        ponto /= 10;
        std::cout << std::setw(12) << ponto << std::setw(12) << pontos[i] << '\n';   
        ++i;
    }
    return 0;
}