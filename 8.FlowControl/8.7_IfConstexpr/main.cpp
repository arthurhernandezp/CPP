#include <iostream>

int main(){
    
    constexpr bool condicao{false};

    if constexpr (condicao){
        std::cout << "Condicao e true" << '\n';
    }else{
        std::cout << "Condicao e false" << '\n';
    }

    return 0;
}