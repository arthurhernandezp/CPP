#include <iostream>

int main(){
    
    // Quando o new falha resulta no interrupção da execução 
    //terminate called after throwing an instance of 'std::bad_alloc'
    //what():  std::bad_alloc
    //
    // Exemplo
    /*
        int * data {new int[10000000000000000]};
        std::cout << "O programa terminou bem!" << '\n';
        delete data;
        std::cout << "Testando para ver se o programa irá finalizar bem!" << '\n'; // Não irá acontecer esse output
    */

    // Primeira forma de como solucionar esse problema, 
    // para que se falhe o new não interrompa a execução do programa
        try{
            int * data {new int[10000000000000000]};
            delete data;
        }catch(std::exception& ex){
            std::cout << "Falhou ao tentar alocar um array com 10000000000000000 elementos!" << '\n';
            std::cout << "ex.what() : " << ex.what() << '\n';
        }

    // Segunda forma de como solucionar esse problema,
    // Usando std::nothrow
        int * data2 { new (std::nothrow) int[10000000000000000]}; // Se este statement falhar, "data" será inicializado com nullptr
        if( data2 != nullptr ){
            delete data2;
        }else{
            std::cout << "data2 e nullptr" << '\n'; 
        }
    
    std::cout << '\n';
    std::cout << "Testando para ver se o programa ira finalizar bem!" << '\n';

    return 0;
}