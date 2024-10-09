#include <iostream>
#include <iomanip>

int main(){
    
    std::cout << "Trabalhando com Loop dentro de outro Loop " << '\n';

    const size_t LINHAS {12};
    const size_t COLUNAS {3};

    for( size_t i {0} ; i < LINHAS ; ++i ){
        for( size_t j {0} ; j < COLUNAS ; ++j ){
            //std::setw(2) para i e j ser representado no tamanho de 2 digitos
            std::cout << "( linha " << std::setw(2) << i << ", col " << std::setw(2) << j << ") ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    
    return 0;
}