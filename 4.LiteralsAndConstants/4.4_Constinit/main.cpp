#include <iostream>

//"constinit" somente para variaveis globais ou static

const int var1 {33};
constexpr int var2{34};
int var3{35};
constinit int idade {55};
const constinit int idade2{var1};       //Combinação de "const" e "constinit"
constinit int idade3{idade2};           //Se iniciar com "idade" geraria um ERROR, pois uma constinit precisa ser
                                        //inicializar com uma constante e consinit não garante

//constinit idade4{var3} #Error pois var3 é em tempo de execução e idade4 em tempo de compilação

const constinit double altura {1.74};
//constexpr constinit double altura2{1.73}; //Error, não é possivel combinar "const" e "constexpr"


int main(){
    return 0;
}