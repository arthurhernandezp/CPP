#include <iostream>

int main(){
    int value {5};
    //Incrementando em 1
    value = value + 1;
    std::cout << "O valor agora e (value = value + 1): " << value << '\n'; // 6

    value = 5; //Resetando o valor para 5

    //Decrementando em 1
    value = value - 1;
    std::cout << "O valor agora e (value = value - 1): " << value << '\n'; // 4

    //================================================================

    //Postfix incremento e decremento

    //Reset para 5
    value = 5;

    std::cout << "O valor com incremento posfixado (value++): " << value++ << '\n';
    std::cout << "O valor e : " << value << '\n';
    std::cout << '\n';

    //Decremento com posfixado(postfix)

    value = 5; // reset para 5

    std::cout << "O valor com decremento posfixado (value--) : " << value-- << '\n';
    std::cout << "O valor e : " << value << '\n';
    std::cout << '\n';

    //================================================================

    //Prefix incremento e decremento

    value = 5; // reset para 5
    std::cout << "O valor com incremento prefixado (++value) : " << ++value << '\n';
    std::cout << "O valor e : " << value << '\n';
    std::cout << '\n';

    value = 5; // reset para 5
    std::cout << "O valor com decremento prefixado (--value) : " << --value << '\n';
    std::cout << "O valor e : " << value << '\n';
    std::cout << '\n';

    return 0;
}