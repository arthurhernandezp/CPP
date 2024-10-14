#include <iostream>

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Refencia geral@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

int var1{33};
int * p_var1 {&var1};               // Non const pointer to no const int
const int * p_var2 {&var1};         // Pointer to const int
const int * const p_var3 {&var1};   // Const pointer to const int
int * const p_var4 {&var1};         //Const pointer to non const int

// Se "const" aparecer ANTES do  *   : o valor para onde o ponteiro aponta é const
// Se "const" aparecer DEPOIS do  *  : o ponteiro é constante
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

int main(){
    
    // Uma variavel normal que pode ser modificada, ou seja não é const

        std::cout << '\n';
        std::cout << "Uma variavel normal que pode ser modificada, ou seja nao e const" << '\n';

        int numero {4};
        std::cout << "Numero : " << numero << '\n';
        std::cout << "Endereco da variavel (&numero) : " << &numero << '\n';

        //Modificando
        numero = 12;
        numero +=5;

        //Acessando e imprimindo 
        std::cout << "Numero : " << numero << '\n';
        std::cout << "Endereco da variavel (&numero) : " << &numero << '\n';
        std::cout << '\n';

    //Ponteiro: Pode modificar o dado
    //Non-const pointer to a non-const data
        int * p_numero1 {nullptr};
        int numero1 {33};
        p_numero1 = &numero1;
        std::cout << "Ponteiro e valor apontado para : são modificaveis" << '\n';
        std::cout << "p_numero1 : " << p_numero1 << '\n';       
        std::cout << "*p_numero1 : " << (*p_numero1) << '\n';   //33
        std::cout << "numero1 : " << numero1 << '\n';           //33
        std::cout << "&numero1 : " << &numero1 << '\n';         

    //Mudando o valor apontado pelo ponteiro
        std::cout << '\n';
        std::cout << "Modificando o valor apontado por p_numero1 usando o ponteiro" << '\n';
        *p_numero1 = 444;
        std::cout << "p_numero1 : " << p_numero1 << '\n';
        std::cout << "*p_numero1 : " << (*p_numero1) << '\n';   //444
        std::cout << "numero1 : " << numero1 << '\n';           //444
        std::cout << "&numero1 : " << &numero1 << '\n';

    //Mudando para onde o ponteiro está apontando antes numero1
        std::cout << '\n';
        std::cout << "Mudando para onde o ponteiro esta apontando antes numero1, agora esta apontando para numero2" << '\n';
        int numero2 {10};
        p_numero1 = &numero2; // Mudança
        std::cout << "numero1 : " << numero1 << '\n';           //444
        std::cout << "&numero1 : " << &numero1 << '\n';
        std::cout << "*p_numero1 : " << (*p_numero1) << '\n';   //10
        std::cout << "p_numero1 : " << p_numero1 << '\n';
        std::cout << "numero2 : " << numero2 << '\n';
        std::cout << "&numero2 : " << (&numero2) << '\n';   //10
        std::cout << '\n';

    //Ponteiro para const
    //Pointer to const data : Ou seja você NÃO poderá modificar o dado através do ponteiro como visto 
        std::cout << '\n';
        std::cout << "O ponteiro pode ser modificado ( mudar para onde esta apontando ), o dado e constante " << '\n';
        int numero3{623};
        const int * p_numero3 {&numero3}; //Não pode modificar o valor de numero3 através de p_numero3
        std::cout << "numero3 : " << numero3 << '\n';
        std::cout << "&numero3 : " << (&numero3) << '\n';
        std::cout << "p_numero3 : " << p_numero3 << '\n'; 
        std::cout << "*p_numero3 : " << (*p_numero3) << '\n';

        //Erro de compilação, não é permitido alterar o valor para onde está sendo apontado pelo ponteiro
            //*p_numero3 = 4444;

        //Mudando para onde está apontando
        int numero4{456};
        p_numero3 = &numero4; // Funciona!!
        std::cout << '\n';
        std::cout << "Mudando para onde esta apontando p_numero3 para numero4" << '\n';
        std::cout << "numero3 : " << numero3 << '\n';
        std::cout << "&numero3 : " << (&numero3) << '\n';
        std::cout << "p_numero3 : " << p_numero3 << '\n'; 
        std::cout << "*p_numero3 : " << (*p_numero3) << '\n';
        std::cout << "numero4 : " << numero4 << '\n';
        std::cout << "&numero4 : " << (&numero4) << '\n';
        std::cout << '\n';
    
	//Ponteiro e valor apontando são constantes
    //Ou seja o ponteiro NÃO poderá apontar para outro endereço, o valor não poderá ser alterado usando o ponteiro e o valor não poderá ser alterado usando a propria variavel
    
        const int numbero5 {459};
        const int* const p_numbero5 {&numbero5 };
        std::cout << "Ponteiro e constante, valor apontando tambem e constante : " << '\n';
        std::cout << "p_numbero5 :" << p_numbero5 << '\n';
        std::cout << "*p_numbero5 : " << *p_numbero5 << '\n';
        
        //Por ter (const int *) não pode alterar o valor da variavel 
        //*p_number5 = 222; // Error 
        
        //Por ter (int * const) não pode alterar para onde o ponteiro aponta
        int number6 {333};
        //p_number5 = &number6;  // Error : Trying to assign to read only location
        
        std::cout << '\n';
    
	//Pointer e constante (não pode apontar para outro endereço)
	//O valor apontado não é constante entao pode ser alterado pela variavel e usando o ponteiro
    std::cout << "Pointer is contant, pointed to value can change : " << '\n';
    int numbero7 {982};
    
    int * const p_numbero7 { &numbero7};
    
    std::cout << "p_numbero7 :" << p_numbero7 << '\n';
    std::cout << "*p_numbero7 : " << *p_numbero7 << '\n';
    
    *p_numbero7 = 456;
    std::cout << "O valor apontado por p_numbero7 agora e : " << *p_numbero7 << std::endl;
    
    int number8 {2928};
    //Não é permitido alterar o endereço que o ponteiro aponta por ter int * const
    //p_numbero7 = &number8;
    return 0;
}