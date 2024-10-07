#include <iostream>

int main(){
    
    //i , x , y tem que ser do mesmo tipo
    for(size_t i{0}, x{5}, y{22}; y > 15 ; ++i, x+=5, --y){
        std::cout << "i: " << i << ", x: " << x << ", y: " << y << '\n';
    }

    return 0;
}