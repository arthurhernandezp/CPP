//https://en.cppreference.com/w/cpp/types/numeric_limits

#include <iostream>
#include <limits>

int main(){

	std::cout << "O limite para short e de " << std::numeric_limits<short>::min() << " ate " 
        << std::numeric_limits<short>::max() << std::endl;
        
    std::cout << "O limite para unsigned short is from " << std::numeric_limits<unsigned short>::min() << " ate " 
        << std::numeric_limits<unsigned short>::max() << std::endl;
        
        
	std::cout << "O limite para int is from " << std::numeric_limits<int>::min() << " ate " 
        << std::numeric_limits<int>::max() << std::endl;
        
    std::cout << "O limite para unsigned int e de " << std::numeric_limits<unsigned int>::min() << " ate " 
        << std::numeric_limits<unsigned int>::max() << std::endl;
        
    std::cout << "O limite para long e de " << std::numeric_limits<long>::min() << " ate " 
        << std::numeric_limits<long>::max() << std::endl;
        
    std::cout << "O limite para float e de " << std::numeric_limits<float>::min() << " ate " 
        << std::numeric_limits<float>::max() << std::endl;
        
    std::cout << "O limite (with lowest) para float e de " << std::numeric_limits<float>::lowest() << " ate " 
        << std::numeric_limits<float>::max() << std::endl;
        
    std::cout << "O limite (with lowest) para double e de " << std::numeric_limits<double>::lowest() << " ate " 
        << std::numeric_limits<double>::max() << std::endl;
        
    std::cout << "O limite (with lowest) para long double e de " << std::numeric_limits<long double>::lowest() << " ate " 
        << std::numeric_limits<long double>::max() << std::endl;


    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;
    return 0;
}