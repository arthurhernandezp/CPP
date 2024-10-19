#include <iostream>

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@ CASO 1: PONTEIROS SEM INICIALIZAÇÃO                             
@@@@ SOLUÇÃO : INICIALIZAR COM nullptr e verificar se não é nullptr
@@@@
@@@@ CASO 2: USAR O PONTEIRO APÓS O DELETE                         
@@@@ SOLUÇÃO : RESETAR O PONTEIRO PARA nullptr e verificar se não é nullptr
@@@@
@@@@ CASO 3: VARIOS PONTEIROS APONTANDO PARA O MESMO ENDEREÇO     
@@@@ SOLUÇÃO : TER UM PONTEIRO MASTER PARA SER RESPONSAVEL POR LIMPAR, OUTROS PONTEIROS SÓ PODEM USAR O ENDEREÇO SE O MASTER NÃO FOR NULLPTR
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main(){

    // Estudando casos que não são seguros envolvendo usos de ponteiros
    // CASO 1: Ponteiro sem inicialização, usando um ponteiro sem inicializar com um endereço VALIDO

        int * p1_caso1;

        std::cout << '\n';
        std::cout << "Caso 1 : Ponteiro sem inicializacao" << '\n';
        std::cout << "p1_caso1 : " << p1_caso1 << '\n';
        //std::cout << "*p1_caso1 : " << *p1_caso1 << '\n'; // # Esse statement poderá causará um CRASH caso seja executado

        // SOLUÇÃO CASO 1
        // SEMPRE INICIALIZE OS PONTEIROS COM NULLPTR

        int * p2_caso1{nullptr}; //Essa inicialização coloca nullptr no ponteiro

        std::cout << '\n';
        std::cout << "Solucao Caso 1 : Ponteiro sem inicializacao porem com verificacao" << '\n';
        // Checar se o ponteiro não é nullptr para acessar essa memoria
        // Se o ponteiro nao for inicializado do modo seguro poderá sim entrar nesse loop, por isso sempre inicialize com nullptr
        if(p2_caso1 != nullptr){
            std::cout << "*p2_caso1 : " << *p2_caso1 << '\n';
        }else{
            std::cout << "Nao sera acessado a memoria se o ponteiro for nullptr" << '\n';
        }

    // CASO 2: Usando lendo dado de um ponteiro após ter a sua memória liberada

        int * p_caso2 = new int{34};
        
        std::cout << '\n';
        std::cout << "Caso 2 : Usando lendo dado de um ponteiro apos ter a sua memoria liberada" << '\n';
        std::cout << "p_numero : " << p_caso2 << '\n';
        std::cout << "*p_numero (antes do delete) : " << *p_caso2 << '\n';
        delete(p_caso2);
        // std::cout << "*p_numero (depois do delete) : " << *p_caso2 << '\n';
        // Se o SO alocar esse endereço de memoria pode causar um CRASH ao acessar esse endereço

        // SOLUÇÃO CASO 2
        // Depois da chamada do delete, resetar o ponteiro para nullptr
        // O ponteiro para nullptr deixará claro que não aponta para lugar nenhum
        // e sempre verificar se o ponteiro não é nullptr quando for usar

        int * p2_caso2 {new int{44}};   // Inicialização segura
        std::cout << '\n';
        std::cout << "Solução Caso 2 : Resetando o ponteiro apos o delete para nullptr e verificando" << '\n';
        std::cout << "p_numero : " << p_caso2 << '\n';
        std::cout << "*p_numero (antes do delete e reset) : " << *p_caso2 << '\n';
        delete(p2_caso2);
        p2_caso2 = nullptr;             // Resetando o ponteiro para nullptr

        if( p2_caso2 != nullptr ){
            std::cout << "*p_numero (depois do delete e reset) : " << *p_caso2 << '\n';
        }


    // Caso 3: Temos um primeiro ponteiro com posse de um endereço e outro ponteiro apontando para o MESMO endereço
    // e ao liberar a memoria do primeiro ponteiro, ao tentar acessar o endereço pelo segundo ponteiro causará um CRASH

        int * p1_caso3{new int{44}};
        int * p2_caso3{p1_caso3};

        std::cout << '\n';
        std::cout << "Caso 3 : Dois ponteiros apontando para o mesmo endereço" << '\n';
        std::cout << "p2_caso3 : " << p2_caso3 << '\n';
        std::cout << "*p2_caso3 (antes do delete do p1) : " << *p2_caso3 << '\n';
        // Deletando p1
        delete(p1_caso3);
        // p2 aponta para um endereço DELETADO, ao acessar esse endereço
        // pode trazer lixo, causar um CRASH 
        std::cout << "*p2_caso3 (depois do delete do p1) : " << *p2_caso3 << '\n';

        // SOLUÇÃO CASO 3
        // PARA DIVERSOS PONTEIRO APONTANDO PARA O MESMO ENDEREÇO, DEIXE UM PONTEIRO RESPONSÁVEL PARA LIBERAR A MEMORIA
        // OS OUTROS DEVERÃO VERIFICAR SE O PONTEIRO RESPONSAVEL É NULLPTR OU NÃO ANTES DE ACESSAR A ÁREA DE MEMORIA

        int * pmaster_caso3{new int{55}};
        int * pSlav_caso3{pmaster_caso3};

        std::cout << "*p_master_caso3 : " << *pmaster_caso3 << '\n';
        
        //Usando pSlav_caso3 verificando se o master não é nullptr
        if( !(pmaster_caso3 == nullptr) ){
            std::cout << "*pSlav_caso3 : " << pSlav_caso3 << '\n';
        }

        delete(pmaster_caso3);

    return 0;
}