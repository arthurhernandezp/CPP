#include <iostream>

int main(){
    const int TAMANHO_MAX_NOMES {15};
    char nomes [][TAMANHO_MAX_NOMES]{
        "Arthur",
        "Mari",
        "Laila",
        "Art"
    };

    std::cout << "sizeof nomes : " << sizeof(nomes) << '\n';


    for( auto & nome : nomes ){
        std::cout << nome << ' ';
    }
}