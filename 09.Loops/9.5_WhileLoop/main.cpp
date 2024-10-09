#include <iostream>

int main(){
    /*Pilares de qualquer loop
    1 - Iterator
    2 - Starting Point
    3 - Tests
    4 - Increment(Decrement)
    5 - Loop body
    */
   
    const size_t CONTADOR {10};
    size_t incremento {0}; // Iterator declaração

    while( incremento < CONTADOR ){
        std::cout << "Valor do incremento e : " << incremento << '\n';
        ++incremento;
    }
    
    return 0;
}