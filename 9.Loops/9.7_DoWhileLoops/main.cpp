#include <iostream>

int main(){

    const int COUNT{0};
    size_t i{0}; // Iterator declaration

    do{
        std::cout << "i : " << i << '\n';
        ++i; // Incrementation
    }while( i < COUNT);

    std::cout << "terminou" << '\n';
    
    return 0;
}