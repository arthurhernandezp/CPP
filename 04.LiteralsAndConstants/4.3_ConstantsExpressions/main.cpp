#include <iostream>

int main(){
    constexpr int VERSAO_DE_UMA_BIBLIOTECA {3}; // Em tempo de compilação devido ao constexpr 
    //Também é constante logo não é possivel alterar
    std::cout << "Versao de uma biblioteca: " << VERSAO_DE_UMA_BIBLIOTECA << '\n';

    /*ERROR
    //int numero_em_tempo_de_execucao {6};
    //constexpr int numero_em_tempo_de_compilacao {numero_em_tempo_de_execucao};  
    //#Error pois não é possivel inicializar uma variavel de tempo de compilação com uma de tempo de execução
    //Pois o compilador não sabe quem é a variavel de tempo de execução
    */

   //FUNCIONA
    const int variavel1_em_tempo_de_compilacao {5};
    constexpr int numero_em_tempo_de_compilacao {variavel1_em_tempo_de_compilacao}; 

    //VERIFICAÇÃO EM TEMPO DE COMPILAÇÃO
    int variavel1_em_tempo_de_execucao{0};
    //static_assert(VERSAO_DE_UMA_BIBLIOTECA == 4); // Error
    static_assert(VERSAO_DE_UMA_BIBLIOTECA == 3); // Passou
    //static_assert(variavel1_em_tempo_de_execucao == 0 ); //Error pois static_assert será em tempo de compilação
                                                        
    return 0;
}