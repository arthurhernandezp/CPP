#include <iostream>

int main(){
    /*
    for(size_t i {0} ; i < 100000 ; ++i ){
        //std::cout << "i : " << i << '\n';
    }
    std::cout << "Acabou" << '\n';
    */
    size_t i{0};
    while( i < 100000 ){
        //std::cout << "i : " << i << '\n';
        ++i;
    }
    std::cout << "Acabou" << '\n';

    return 0;
}