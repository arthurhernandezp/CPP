#include <iostream>

int main(){
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << '\n';
    std::cout << "b : " << b << '\n';
    std::cout << "c : " << c << '\n';

    //Estudando operadores lógicos 

    //AND ( && )
    // Será verdadeiro se as DUAS condições forem verdade
    std::cout << '\n';
    std::cout << "Comecando testes do operador AND (&&) " << '\n';
    std::cout << "(a && b) : " << (a && b) << '\n';
    std::cout << "(a && c) : " << (a && c) << '\n';
    std::cout << "(b && c) : " << (b && c) << '\n';
    std::cout << "(a && b && c) : " << (a && b && c) << '\n';

    //OR ( || )
    // Será verdadeiro se pelo menos uma das conduções for verdade
    std::cout << '\n';
    std::cout << "Comecando testes do operador OR (||) " << '\n';
    std::cout << "(a || b) : " << (a || b) << '\n';
    std::cout << "(a || c) : " << (a || c) << '\n';
    std::cout << "(b || c) : " << (b || c) << '\n';
    std::cout << "(a || b || c) : " << (a || b || c) << '\n';

    //NOT ( ! )
    // Nega a condição
    std::cout << '\n';
    std::cout << "Comecando testes do operador NOT (!) " << '\n';
    std::cout << "(!a) : " << (!a) << '\n';
    std::cout << "(!b) : " << (!b) << '\n';
    std::cout << "(!c) : " << (!c) << '\n';


    //Combinação dos operadores lógicos
    std::cout << '\n';
    std::cout << "Combinacao de operadores logicos " << '\n';
    std::cout << " ( !(a && b) || c ) : " << ( !(a && b) || c ) << '\n';

    return 0;
}