#include <iostream>

bool a();
bool b();
bool c();
bool d();
bool e();

int main(){
    /*
    bool b1{ true };
    bool b2{ true };
    bool b3{true};
    bool b4{false};
    bool b5{false};
    bool b6{false};
    bool b7{false};
    bool b8{true};

    //AND, se uma das condições for false(0), o resultado é 0(false)
    std::cout << '\n';
    std::cout << std::boolalpha;
    std::cout << "Circuido AND" << '\n';
    std::cout << "Resultado: " << (b1 && b2 && b3 && b4) << '\n';

    //OR, se uma das condições for true(1), o resultado é 1(true)
    std::cout << '\n';
    std::cout << std::boolalpha;
    std::cout << "Circuido OR" << '\n';
    std::cout << "Resultado: " << (b5 || b6 || b7 || b8) << '\n';

    */
    std::cout << "Iniciando os testes com AND (&&)" << '\n';

    if( a() && b() && c() && d() && e() ){ // O compilador só irá executar as funções ate encontrar a primeira que falhe caso nenhuma seja false todas as funçoes serão executadas
        std::cout << "Todas são verdadeiras" << '\n';
    }else{
        std::cout << "Alguma falhou" << '\n';
    }

    std::cout << '\n';
    std::cout << "Iniciando os testes com OR (||)" << '\n';

    if( a() || b() || c() || d() || e() ){ //O compilador irá executar as funções ate encontrar a primeira true
        std::cout << "Alguma e verdadeira" << '\n';
    }else{
        std::cout << "Alguma falhou" << '\n';
    }
    return 0;
}

bool a(){
    std::cout << "funcao a" << '\n';
    return true;
}
bool b(){
    std::cout << "funcao b" << '\n';
    return true;
}
bool c(){
    std::cout << "funcao c" << '\n';
    return false;
}
bool d(){
    std::cout << "funcao d" << '\n';
    return true;
}
bool e(){
    std::cout << "funcao e" << '\n';
    return true;
}