#include <iostream>
#include <iomanip>
#include <bitset>


int main(){

	const int tamanho_da_coluna {20};

	std::cout << '\n';
	std::cout << "Compound bitwise assignment operators" << '\n';
	
	unsigned char sandbox_var{0b00110100}; // 8 bits : somente numeros positivos
	
    //Imprimindo o valor inicial
	std::cout << '\n';
	std::cout << "Valor inicial :  " << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "sandbox_var : "
		<< std::setw(tamanho_da_coluna) << std::bitset<8>(sandbox_var) << '\n';
    std::cout << '\n';
	
	//Compound left shift
	std::cout << '\n';
	std::cout << "Movendo para esquerda os bits 2 vezes :  " << '\n';
	sandbox_var <<= 2;
    std::cout << std::setw(tamanho_da_coluna) << "sandbox_var : "
		<< std::setw(tamanho_da_coluna) << std::bitset<8>(sandbox_var) << '\n';
    std::cout << '\n';


    //Compound right shift
	std::cout << '\n';
	std::cout << "Movendo para direita os bits 4 vezes :  " << '\n';
	sandbox_var >>= 4;
    std::cout << std::setw(tamanho_da_coluna) << "sandbox_var : "
		<< std::setw(tamanho_da_coluna) << std::bitset<8>(sandbox_var) << '\n';
    std::cout << '\n';

	//Compound OR com 0000 0010 para ter os 4 ultimos bits ligados 
	std::cout << '\n';
	std::cout << "Compound OR com  0000 0010 :  " << '\n';
	sandbox_var |= 0b00000010;
    std::cout << std::setw(tamanho_da_coluna) << "sandbox_var : "
		<< std::setw(tamanho_da_coluna) << std::bitset<8>(sandbox_var) << '\n';
    std::cout << '\n';


	//Compound AND com 0000 1100 vai desligar os 2 ultimos bits
	std::cout << '\n';
	std::cout << "Compound AND com 0000 1100 :  " << '\n';
	sandbox_var &= 0b00001100;
    std::cout << std::setw(tamanho_da_coluna) << "sandbox_var : "
		<< std::setw(tamanho_da_coluna) << std::bitset<8>(sandbox_var) << '\n';
    std::cout << '\n';


	//XOR com 00000011 vai deixar ligado os 4 ultimos bits 
	std::cout << '\n';
	std::cout << "Compound XOR com 0000 0011 :  " << '\n';
	sandbox_var ^= 0b00000011;
    std::cout << std::setw(tamanho_da_coluna) << "sandbox_var : "
		<< std::setw(tamanho_da_coluna) << std::bitset<8>(sandbox_var) << '\n';
    std::cout << '\n';

    return 0;
}