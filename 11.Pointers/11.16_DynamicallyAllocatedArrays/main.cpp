#include <iostream>

int main(){
    /*
    const size_t TAMANHO_ARRAY{10};

    // Diferentes formas de declarar um array que será alocado na heap

    double * p_salarios{ new double[TAMANHO_ARRAY] }; // Essa forma o array terá lixo, e se a operação new falhar irá causar um CRASH no programa 
    double * p_estudates{ new (std::nothrow) double[TAMANHO_ARRAY]{} }; // Essa forma TODOS os elementos será inicializados com 0, e se a operação "new" falhar o programa continuará em execução e o ponteiro será inicializado com nullptr
    double * p_notas{ new (std::nothrow) double[TAMANHO_ARRAY]{1,2,3,4,5} }; // Essa forma o array será [1,2,3,4,5,0,0,0,0,0], e se a operação "new" falhar o programa continuará em execução e o ponteiro será inicializado com nullptr

    // Acessando e imprimindo os elementos dos arrays

        if(p_salarios){// Verifica se p_salarios não é nullptr
            std::cout << "Acessando o array de salarios!" << '\n';
            for(size_t i {0} ; i < TAMANHO_ARRAY ; ++i ){
                std::cout << p_salarios[i] << " ";
            }
            std::cout << '\n';
        }
        
        if(p_estudates){// Verifica se p_estudates não é nullptr
            std::cout << "Acessando o array de estudates!" << '\n';
            for(size_t i {0} ; i < TAMANHO_ARRAY ; ++i ){
                std::cout << p_estudates[i] << " ";
            }
            std::cout << '\n';
        }

        if(p_notas){// Verifica se p_notas não é nullptr
            std::cout << "Acessando o array de estudates!" << '\n';
            for(size_t i {0} ; i < TAMANHO_ARRAY ; ++i ){
                std::cout << p_notas[i] << " ";
            }
            std::cout << '\n';
        }


    // Como liberar a memoria de arrays na heap e resetar o ponteiro para nullptr

        delete[] p_salarios; p_salarios = nullptr;
        delete[] p_estudates; p_estudates = nullptr;
        delete[] p_notas; p_notas = nullptr;

    // Diferenças entre static arrays vs dynamic arrays

    // Static arrays são armazenados na STACK e dynamic arrays são armazenados na HEAP
    // É possivel usar ranged base for loops para os static arrays e também usar std::size(static_array)
    // É possivel aumentar e diminuir o tamanho do tamanho do array dinamico ao longo da execução

    */

    // Fazendo merge de arrays usando alocação dinamica
        int data1[] {1,2,3,4,5,66,77};
        int data2[] {10,20,30,40,50,60};
        int * new_array { new (std::nothrow) int[std::size(data1)+std::size(data2)]{} };
        
        if(new_array){
            for(size_t i{0} ;  i < (std::size(data1) + std::size(data2)) ; ++i ){
                if(i < std::size(data1)){
                    new_array[i] = data1[i];
                    new_array[i+std::size(data1)] = data2[i];
                }
                std::cout << new_array[i] << ' ';
            }
        }
        delete[] new_array; new_array = nullptr;
    return 0;
}