#include <iostream>

int main(){

    //Dessa forma não é possivel alterar os as letras individualmente dos nomes
    //Porém é possivel alterar os nomes atribuindo outro const char * para aquela posição
    //Exemplo
    //const char * novo_nome {"Artrrrrrr"};    
    //nomes[0] = novo_nome;         //#Funciona
    //*nomes[0] = 'b'               //#Error de compilação

    const char * nomes [] {
        "Arthur",
        "mari",
        "laila"
    };

    //Imprimindo os dados
    for( const char * nome : nomes ){
        std::cout << "Nome : " << nome << '\n';
    }
    std::cout << "Acessando individualmente um nome do array" << '\n';
    std::cout << "*nomes : " << *nomes << '\n';
    std::cout << "Acessando individualmente uma letra do nome do array" << '\n';
    std::cout << "*nomes[0] : " << *nomes[0] << '\n';


    //Porém ao declarar e inicializar dessa forma

    const char * const nomes_constantes[] {
        "Arthur",
        "mari",
        "laila"
    };

    const char * novo_nome {"Artrrrrrr"};    
    //nomes_constantes[0] = novo_nome;  Resultará em error de compilação
    //*nomes_constantes[0] = 'b';       Resultará em error de compilação
    
    return 0;
}