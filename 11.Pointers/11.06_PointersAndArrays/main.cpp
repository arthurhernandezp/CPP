#include <iostream>
#include <iomanip>

int main(){
    
    int placar_dos_jogos[10]{1,2,3,4,5,6,7,8,9,10};
    int * p_placar = { placar_dos_jogos };
    int * p_novo {placar_dos_jogos};

    //Imprimindo os sizeof
    //Ao passar o dado para um ponteiro acontece perda de informações conhecidas do array de origem
    //Como o size do array, não é possivel fazer std::size(ponteiro)
    //Todo ponteiro tem 8 bytes
    //Também não é possivel usar o for ranged base loop usando o ponteiro como a coleção

    std::cout << '\n';
    std::cout << "Imprimindo os sizeof" << '\n';
    std::cout << "sizeof(placa_dos_jogos) : " << sizeof(placar_dos_jogos) << " bytes" << '\n';
    std::cout << "sizeof(placa_dos_jogos[0]) : " << sizeof(placar_dos_jogos[0]) << " bytes" << '\n';
    std::cout << "std::size(placar_dos_jogos) : " << std::size(placar_dos_jogos)  << " elementos" << '\n';

    std::cout << "sizeof(p_placar) : " << sizeof(p_placar) << " bytes" << '\n';
    std::cout << "sizeof(*p_placar) : " << sizeof(*p_placar) << " bytes" << '\n';
    //std::cout << "std::size(p_placar) : " << std::size(p_placar) << '\n';     #Erro de compilação

    std::cout << "sizeof(p_novo) : " << sizeof(p_novo) << " bytes" << '\n';
    std::cout << "sizeof(*p_novo) : " << sizeof(*p_novo) << " bytes" << '\n';
    //std::cout << "std::size(p_novo) : " << std::size(p_novo) << '\n';         #Erro de compilação


    //Imprimindo os endereços
    std::cout << '\n';
    std::cout << "Imprimindo os enderecos" << '\n';
    std::cout << std::setw(21) << "placar_dos_jogos : " << placar_dos_jogos << '\n';
    std::cout << std::setw(21) << "p_placar : " << p_placar << '\n';
    std::cout << std::setw(21) << "p_novo : " << p_novo << '\n';

    //Imprimindo o conteudo dos endereços
    std::cout << '\n';
    std::cout << "Imprimindo o conteudo dos enderecos" << '\n';
    std::cout << std::setw(22) << "*placar_dos_jogos : " << *placar_dos_jogos << '\n';
    std::cout << std::setw(22) << "placar_dos_jogos[0] : " << placar_dos_jogos[0] << '\n';
    std::cout << std::setw(22) << "*p_placar : " << *p_placar << '\n';
    std::cout << std::setw(22) << "p_placar[0] : " << p_placar[0] << '\n';
    std::cout << std::setw(22) << "*p_novo : " << *p_novo << '\n';
    std::cout << std::setw(22) << "p_novo[0] : " << p_novo[0] << '\n';

    return 0;
}