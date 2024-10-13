#include <iostream>

int main(){
    
    // Para usar um char pointer com um C-String de literal, é preciso que seja const a variavel
    const char * mensagem {"Testando ponteiro para caracters!"};
    
    std::cout << "Mensagem : " << mensagem << '\n';
    
    // mensagem[0] = 'b';   // Erro de compilação, ao tentar mudar uma informação de uma var const 

    std::cout << "*mensagem : " << *mensagem << '\n';

    return 0;
}