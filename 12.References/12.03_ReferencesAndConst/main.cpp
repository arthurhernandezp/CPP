#include <iostream>

int main(){
    
    // Non Const Reference
    // Pode alterar o valor da variavel original ao longo da execução
    // E não pode referenciar outra variavel ao longo da execução

    std::cout << '\n';
    std::cout << "Non Const Reference" << '\n';
    int age{23};
    int& ref_age{age};

    std::cout << "age : " << age << '\n';
    std::cout << "ref_age : " << ref_age << '\n';

    //Modificando a variavel original atraves da referencia
    ref_age++;
    std::cout << "Modificando a variavel original atraves da referencia (ref_age = 3)" << '\n';
    std::cout << "age : " << age << '\n';
    std::cout << "ref_age : " << ref_age << '\n';


    // Const Reference e comportamento equivante a um (const point to const data =  const type const p)
    // NÃO PODE ALTERAR O VALOR DA VARIAVEL ORIGINAL ATRAVÉS DA REFERENCIA      #Erro de compilação

    const int ref2_age{age};    // a palavra chave const APERNAS aplica a variavel ref2_age e não para age

    // ref2_age = 4;    // erro de compilação

    return 0;
}