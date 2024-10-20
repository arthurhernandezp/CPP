#include <iostream>

int main(){

    // Primeiro caso de vazamento de memoria
    // É feita a alocação dinamica porém depois o ponteiro aponta para outro endereço e o primeiro não é liberado
    // Isso causará memory leak pois não será mais possivel acessar aquele endereço e liberar-lo para o SO
        int * p_numero{new int {44}};
        int numero{3112};
        p_numero = &numero; //Essa atribuição causará memory leak (vazamento de memoria) pois perderemos o endereço do int 44

    // Segundo caso de memory leak é dupla alocação dinamica sem liberar a memoria 
        int * p_numero_caso2{new int {123}}; // Essa area de memoria ficará perdida e o SO vai continuar aceitando que estamos usando
        p_numero_caso2 = new int {345};   // int{123} está perdido

    // Terceiro caso de memory leak é alocar dinamicamente um área dentro de um escopo e ao sair do escopo não liberar
        {
            int * p_caso3{new int{578}};
           
        }
        // Memoria int{578} se perdeu o acesso;
        
    return 0;
}