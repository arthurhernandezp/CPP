#include <iostream>

int main(){
    /*
    //Primeira forma de declarar e iniciar um array de caracters 
    char mensagem[3] {'O','l','a'};

    //Imprimindo o array
    std::cout << "Mensagem : ";
    for( auto & c : mensagem ){
        std::cout << c;
    }

    std::cout << '\n';

    //Mudando caracters do array
    mensagem[1] = 'c';

    //Imprimindo o array
    std::cout << "Mensagem : ";
    for( auto & c : mensagem ){
        std::cout << c;
    }
    */
    char mensagem[3] {'O','l','a'}; // Essa declaração gerará lixo pois não tem '\0'
    std::cout << "mensagem : " << mensagem << '\n'; // Pode pegar Lixo pois o array de caracters não tem o caracter nulo '\0'
    std::cout << "sizeof(mensagem) : " << sizeof(mensagem) << '\n'; // Pode pegar Lixo pois o array de caracters não tem o caracter nulo '\0'

    //Primeira forma segura!!
    char mensagem2[4] {'O','l','a','\0'}; // Essa declaração está segura
    std::cout << "mensagem2 : " <<  mensagem2 << '\n'; // Tudo ok
    std::cout << "sizeof(mensagem2) : " << sizeof(mensagem2) <<'\n'; // Tudo ok

    //Segunda forma segura, 4 elementos para o tamanho deixando espaço para o caracter '\0'
    char mensagem3[4] {'O','l','a'};
    std::cout << "mensagem3 : " <<  mensagem3 << '\n'; // Tudo ok
    std::cout << "sizeof(mensagem3) : " << sizeof(mensagem3) <<'\n'; // Tudo ok

    //Terceira forma segura, usando String Literal
    char mensagem4 [] {"Ola"};
    std::cout << "mensagem4 : " <<  mensagem4 << '\n'; // Tudo ok
    std::cout << "sizeof(mensagem4) : " << sizeof(mensagem4) <<'\n'; // Tudo ok

    char mensagem5 [] {"Pode ser feito ate com espacos"};
    std::cout << "mensagem5 : " <<  mensagem5 << '\n'; // Tudo ok
    std::cout << "sizeof(mensagem5) : " << sizeof(mensagem5) <<'\n'; // Tudo ok
    
    return 0;
}