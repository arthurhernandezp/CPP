#include <iostream>

int main(){
    // Incremento e decremento do endereço do ponteiro 
        int placar[]{1,2,3,4,5,6,7,8};
        int * p_placar {placar};

        //Incremento
        std::cout << "Incremento do endereco do ponteiro" << '\n';
        for(size_t i{0} ; i < std::size(placar) ; ++i ){
            std::cout << "*p_placar : " << *(p_placar + i);
            std::cout << ", endereco de p_placar : " << p_placar << '\n';
            //++placar;     $Error de compilação
        }

        //Decremento
        std::cout << '\n';
        std::cout << "Decremento do endereco do ponteiro" << '\n';
        for(size_t i{std::size(placar)} ; i > 0 ; --i ){
            // Move 4 bytes * i(sizeof(int)) para tras
            std::cout << "*p_placar : " << *(p_placar + (i - 1));
            std::cout << ", endereco de p_placar : " << p_placar << '\n';
        }

        //Imprimindo o array
        std::cout << '\n';
        for( auto & i : placar ) {
            std::cout << i << ' ';
        }

        //Adição explicita, movendo o ponteiro em 4 posições para frente
        std::cout << '\n';
        std::cout << "Adicao explicita de inteiro" << '\n';
        p_placar = placar; // Reseta o ponteiro para o inicio do vetor
        std::cout << "placar[4] : " << *(p_placar + 4) << '\n';
    
    //Modificar os dados do array através de Pointer arithmetic
        std::cout << "Mostrando o array antes das mudanças" << '\n';
        for(auto & i : placar){
            std::cout << i << ' ';
        }
        p_placar = placar;      // Resetando a posição do ponteiro p_placar
        placar[0] = 44;         // Notação padrão para mudança de dados no array
        *(placar + 1) = 55;     // Equivalente a placar[1] = 55, usando Pointer arithmetic no array : placar
        *(p_placar + 3) = 57;   // Equivalente a placar[3] = 57, usando Pointer arithmetic no ponteiro : p_placar

        std::cout << '\n';
        std::cout << "Mostrando mudancas no array" << '\n';
        for(auto & i : placar){
            std::cout << i << ' ';
        }
        
    return 0;
}