#include <iostream>
#include <iomanip>
int main(){
    std::cout << '\n';

    //Sempre irá gerar o mesmo numero aleatorio 
    int random_numero {std::rand()};
    std::cout << std::setw(30) << "random_numero (0 ~ RAND_MAX): " << std::setw(5) <<random_numero << '\n'; // 0 ~ RAND_MAX
    std::cout << std::setw(30) << "RAND_MAX : " << RAND_MAX << '\n';
    std::cout << '\n';

    for(size_t i{0} ; i < 10 ; ++i ){
        int numero {std::rand() % 11}; // Numero entre 0 ~ 10 
        std::cout << "| Numero " << std::setw(2) << i + 1 << "| entre (0 ~ 10) : " << std::setw(2) << numero << '\n';
    }

    //Agora será possivel sempre gerar numeros aleatorios ao executar o app
    
    std::srand(std::time(0));
    std::cout << '\n';
    std::cout << "Agora os numeros mudarao a cada execução do app!" << '\n';
    for(size_t i{0} ; i < 10 ; ++i ){
        int numero {std::rand() % 11}; // Numero entre 0 ~ 10 
        std::cout << "| Numero " << std::setw(2) << i + 1 << "| entre (0 ~ 10) : " << std::setw(2) << numero << '\n';
    }

    return 0;
}