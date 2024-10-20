#include <iostream>

int main(){
    
    int int_data{123};
    double double_data{55};

    //Referencias

    int& ref_int_data{int_data};
    double& ref_double_data{double_data};
    // Loop só para imprimir duas vezes
    for(size_t i {0}; i <= 1 ; ++i ){
                
        std::cout << '\n';
        std::cout << "int_data : " << int_data << '\n';
        std::cout << "&int_data : " << &int_data << '\n';
        std::cout << "double_data : " << double_data << '\n';
        std::cout << "&double_data : " << &double_data << '\n';
        std::cout << "==================================================" << '\n';
        std::cout << "ref_int_data : " << ref_int_data << '\n';
        std::cout << "&ref_int_data : " << &ref_int_data << '\n';
        std::cout << "ref_double_data : " << ref_double_data << '\n';
        std::cout << "&ref_double_data : " << &ref_double_data << '\n';

        //Fazendo mudanças nas variaveis
        std::cout << '\n';
        int_data = 4;
        double_data = 102;
        
    }

    return 0;
}