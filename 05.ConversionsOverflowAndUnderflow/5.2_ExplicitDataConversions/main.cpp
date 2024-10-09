#include <iostream>

int main(){
    
    // Explicit conversion
    // static_cast<tipofinal>(tipoinicial)

    double n1 {54.3};
    double n2 {43.7};

    int sum = static_cast<int>(n1) + static_cast<int>(n2);
    std::cout << "int sum = static_cast<int>(n1) + static_cast<int>(n2) : " << sum << '\n';
    sum = static_cast<int>(n1 + n2);
    std::cout << "sum = static_cast<int>(n1 + n2) : " << sum << '\n';

    return 0;
}

