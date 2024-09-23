#include <iostream>

int main(){
    int valor{45};

    //Adição
    std::cout << '\n';
    std::cout << "O valor antes : " << valor << '\n';
    valor += 5;
    std::cout << "O valor agora e (valor += 5) : " << valor << '\n';

    //Subtração
    std::cout << '\n';
    valor = 45;
    std::cout << "O valor antes : " << valor << '\n';    
    valor -= 5;
    std::cout << "O valor agora e (valor -= 5) : " << valor << '\n';

    //Multiplicação
    std::cout << '\n';
    valor = 45;
    std::cout << "O valor antes : " << valor << '\n';   
    valor *= 5;
    std::cout << "O valor agora e (valor *= 5): " << valor << '\n';

    //Divisao
    std::cout << '\n';
    valor = 45;
    std::cout << "O valor antes : " << valor << '\n';
    valor /= 5;
    std::cout << "O valor agora e (valor /= 5): " << valor << '\n';

    //Resto
    std::cout << '\n';
    valor = 45;
    std::cout << "O valor antes : " << valor << '\n'; 
    valor %= 5;
    std::cout << "O valor agora e (valor %= 5): " << valor << '\n';
    return 0;
}