#include <iostream>

int main(){
    
    int condicao {-3};

    if(condicao){// Usando a regra se o int for diferente de 0 será true, mesmo se for negativo
        std::cout << "Entrando no if com a condicao e: " << condicao << '\n'; // algo diferente de 0 entrará aqui
    }else{
        std::cout << "Entrando no else com a condicao e: " << condicao << '\n'; //condicao = 0
    }

    return 0;
}