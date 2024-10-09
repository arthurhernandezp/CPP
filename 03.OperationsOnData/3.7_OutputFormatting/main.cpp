#include <iostream>
#include <iomanip>
int main(){
    //=======================================================================

    //std::flush :  flushes o buffer de saida
    std::cout << "Esta e uma nova mensagem " << '\n' << std::flush;
    //Depois de usar std::flush, temos certeza que a mensagem foi enviada
    //Importante para alguns casos

    //=======================================================================

    //std::setw(): Ajusta o campo que a informação será mostrada no terminal
    //setw() somente afeta o próximo valor a ser imprimido

    std::cout << "Tabela sem formatacao" << '\n';
    std::cout << "Arthur" << " " << "Hernandez" << " 23" << '\n';
    std::cout << "Arthur" << " " << "Perez" << " 23" << '\n';
    std::cout << "Perez" << " " << "Hernandez" << " 23" << '\n';
    std::cout << "Hernandez" << " " << "Hernandez" << " 23" << '\n';
    std::cout << "Arthur" << " " << "Arthur" << " 23" << '\n';
    std::cout << "Hernandez" << " " << "Arthur" << " 23" << '\n';

    std::cout << '\n';
    std::cout << "Tabela com formatacao" << '\n';
    std::cout << std::setw(15) << "Nome" << std::setw(15) << "Sobrenome" << std::setw(15) << "Idade" << '\n';
    std::cout << std::setw(15) << "Arthur" << std::setw(15) << "Hernandez" << std::setw(15) << "23" <<'\n';
    std::cout << std::setw(15) << "Arthur" << std::setw(15) << "Perez" << std::setw(15) << "23" << '\n';
    std::cout << std::setw(15) << "Hernandez" << std::setw(15) << "Hernandez" << std::setw(15) << "23" << '\n';
    std::cout << std::setw(15) << "Arthur" << std::setw(15) << "Arthur" << std::setw(15) << "23" << '\n';
    std::cout << std::setw(15) << "Hernandez" << std::setw(15) << "Arthur" << std::setw(15) << "23" << '\n';

    //=======================================================================

    //Justify: Valores podem ser ajustados na esquerda, na direita ou no centro
    //std::right, std::left, std::internal

    //RIGHT
    std::cout << '\n';
    std::cout << "Right justified tabela(default) : " << '\n';
    int tamanho_da_coluna{20};
    std::cout << std::right;
    std::cout << std::setw(tamanho_da_coluna) << "Nome" << std::setw(tamanho_da_coluna) << "Sobrenome" << std::setw(tamanho_da_coluna) << "Idade" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "23" <<'\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Perez" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "23" << '\n';
    //LEFT
    std::cout << '\n';
    std::cout << "Left justified tabela(std::left) : " << '\n';
    std::cout << std::left;
    std::cout << std::setw(tamanho_da_coluna) << "Nome" << std::setw(tamanho_da_coluna) << "Sobrenome" << std::setw(tamanho_da_coluna) << "Idade" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "23" <<'\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Perez" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "23" << '\n';
    //SET FILL
    std::cout << '\n';
    std::cout << "Tabela com espacos preenchidos com ( - ): " << '\n';
    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(tamanho_da_coluna) << "Nome" << std::setw(tamanho_da_coluna) << "Sobrenome" << std::setw(tamanho_da_coluna) << "Idade" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "23" <<'\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Perez" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "23" << '\n';
    std::cout << std::setw(tamanho_da_coluna) << "Hernandez" << std::setw(tamanho_da_coluna) << "Arthur" << std::setw(tamanho_da_coluna) << "23" << '\n';
    
    //=======================================================================

    //std::boolalpha e std::noboolalpha
    //Controla a formatação de variáveis do tipo bool no lugar de mostrar 1 ou 0 mostra true ou false

    bool condicao1{true};
    bool condicao2{false};
    std::cout << '\n';
    std::cout << "Condicao 1: " << condicao1 << '\n';
    std::cout << "Condicao 2: " << condicao2 << '\n';

    std::cout << '\n';
    std::cout << std::boolalpha;
    std::cout << "Condicao 1 com (std::boolalpha) : " << condicao1 << '\n';
    std::cout << "Condicao 2 com (std::boolalpha) : " << condicao2 << '\n';

    std::cout << '\n';
    std::cout << std::noboolalpha;
    std::cout << "Condicao 1 com (std::noboolalpha) : " << condicao1 << '\n';
    std::cout << "Condicao 2 com (std::noboolalpha) : " << condicao2 << '\n';

    //=======================================================================

    //std::showpos e std::noshowpos
    //Usado para mostrar o sinal de positivo nos numeros

    int numero1{4};
    int numero2{-7};

    std::cout << '\n';
    std::cout << "Numero 1 : " << numero1 << '\n';
    std::cout << "Numero 2 : " << numero2 << '\n';

    std::cout << '\n';
    std::cout << std::showpos;
    std::cout << "Numero 1 com (std::showpos) : " << numero1 << '\n';
    std::cout << "Numero 2 com (std::showpos) : " << numero2 << '\n';

    std::cout << '\n';
    std::cout << std::noshowpos;
    std::cout << "Numero 1 com (std::noshowpos) : " << numero1 << '\n';
    std::cout << "Numero 2 com (std::noshowpos) : " << numero2 << '\n';

    //=======================================================================

    //std::dec, std::hex, std::oct
    //diferentes sistemas numericos 

    int inteiro_positivo{717171};
    int inteiro_negativo{-47347};
    double double_variavel{498.32};

    std::cout << '\n';
    std::cout << "Formato base por default : " << '\n';
    std::cout << "Inteiro positivo: " << inteiro_positivo << '\n';
    std::cout << "Inteiro negativo: " << inteiro_negativo << '\n';
    std::cout << "Variavel double: "  << double_variavel << '\n';

    std::cout << '\n';
    std::cout << "Formato em diferentes bases do inteiro positivo: " << '\n';
    std::cout << "Inteiro positivo com (std::dec): " << std::dec << inteiro_positivo << '\n';
    std::cout << "Inteiro positivo com (std::hex): " << std::hex << inteiro_positivo << '\n';
    std::cout << "Inteiro positivo com (std::oct): " << std::oct << inteiro_positivo << '\n';

    std::cout << '\n';
    std::cout << "Formato em diferentes bases do inteiro negativo: " << '\n';
    std::cout << "Inteiro negativo com (std::dec): " << std::dec << inteiro_negativo << '\n';
    std::cout << "Inteiro negativo com (std::hex): " << std::hex << inteiro_negativo << '\n';
    std::cout << "Inteiro negativo com (std::oct): " << std::oct << inteiro_negativo << '\n';

    //Variaveis double não são afetadas por mudança no formato
    std::cout << '\n';
    std::cout << "Formato em diferentes bases do double_variavel: " << '\n';
    std::cout << "Double Variavel com (std::dec): " << std::dec << double_variavel << '\n';
    std::cout << "Double Variavel com (std::hex): " << std::hex << double_variavel << '\n';
    std::cout << "Double Variavel com (std::oct): " << std::oct << double_variavel << '\n';

    //=======================================================================

    //std::uppercase
    //Usado para mostrar no cout em maisculo

    std::cout << '\n';
    std::cout << std::uppercase;
    std::cout << "Formato em diferentes bases do inteiro positivo: " << '\n';
    std::cout << "Inteiro positivo com (std::dec): " << std::dec << inteiro_positivo << '\n';
    std::cout << "Inteiro positivo com (std::hex): " << std::hex << inteiro_positivo << '\n';
    std::cout << "Inteiro positivo com (std::oct): " << std::oct << inteiro_positivo << '\n';

    //=======================================================================

    //fixed e scientific 

    double a { 3.14159265358979323846 };
    double b { 2006.0};
    double c { 1.43e-10 };

    std::cout << '\n';
    std::cout << "Valores double (default : usa scientific quando necessario): " << '\n';
    std::cout << "a : " << a << '\n';
    std::cout << "b : " << b << '\n';
    std::cout << "c : " << c << '\n';

    std::cout << '\n';
    std::cout << "Valores double com (std::fixed): " << '\n';
    std::cout << std::fixed;
    std::cout << "a : " << a << '\n';
    std::cout << "b : " << b << '\n';
    std::cout << "c : " << c << '\n';

    std::cout << '\n';
    std::cout << "Valores double com (std::scientific): " << '\n';
    std::cout << std::scientific;
    std::cout << "a : " << a << '\n';
    std::cout << "b : " << b << '\n';
    std::cout << "c : " << c << '\n';

    std::cout << '\n';
    std::cout << "Valores double (voltando para o default): " << '\n';
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Voltar a configuração para o default
    std::cout << "a : " << a << '\n';
    std::cout << "b : " << b << '\n';
    std::cout << "c : " << c << '\n';

    //=======================================================================

    //std::setprecision(x)
    //Usado para mostrar casas decimais de um numero double ou float
    //O default é 6
    //Se a precisao for maior que o suporte maximo do tipo irá receber lixo

    std::cout << '\n';
    std::cout << "a (default precision(6)): " << a << '\n';
    std::cout << std::setprecision(10);
    std::cout << "a (std::setprecision(10)): " << a << '\n';
    std::cout << std::setprecision(20);
    std::cout << "a (std::setprecision(20)): " << a << '\n';
    std::cout << std::setprecision(6);

    //=======================================================================

    //std::showpoint
    //Mostra zeros se necessario
    //Forca output com ponto decimal

    double n1{34.1};
    double n2{101.99};
    double n3{12.0};
    int n4 {45};

    std::cout << '\n';
    std::cout << "noshowpoint (default) : " << '\n';
    std::cout << "n1 : " << n1 << '\n';
    std::cout << "n2 : " << n2 << '\n';
    std::cout << "n3 : " << n3 << '\n'; //12
    std::cout << "n4 : " << n4 << '\n';

    std::cout << '\n';
    std::cout << std::showpoint;
    std::cout << "showpoint (std::showpoint) : " << '\n';
    std::cout << "n1 : " << n1 << '\n';
    std::cout << "n2 : " << n2 << '\n';
    std::cout << "n3 : " << n3 << '\n'; //12.0000
    std::cout << "n4 : " << n4 << '\n';

    //=======================================================================

    return 0;
}