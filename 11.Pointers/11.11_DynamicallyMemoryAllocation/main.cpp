#include <iostream>

int main(){
    
    //Revisão de uso de ponteiro

        int numero {44};    // Armazenado na stack
        int * p_numero {&numero};

        std::cout << '\n';
        std::cout << "Declarando ponteiro e atribuindo um endereco" << '\n';
        std::cout << "numero : " << numero << ", *p_numero : " << *p_numero << '\n';
        std::cout << "&numero : " << &numero << ", p_numero : " << p_numero << '\n';

        //Essa declaração sem inicializar de forma segura irá ter lixo na variavel
        int * p_numero1;        
        int numero1{12};
        p_numero1 = &numero1;   // Agora o ponteiro não está apontando para uma memoria com lixo       
        
        std::cout << '\n';
        std::cout << "Declarando ponteiro sem inicializacao" << '\n';
        std::cout << "numero1 : " << numero1 << ", *p_numero1 : " << *p_numero1 << '\n';
        std::cout << "&numero1 : " << &numero1 << ", p_numero1 : " << p_numero1 << '\n';
        std::cout << '\n';

    //PESSIMAS PRATICAS, NÃO FAÇA ISSO

        // Declarando um ponteiro sem inicializar e já escrever dados naquele endereço
        // Desssa forma p_numero2 pode apontar para qualquer lugar inclusive para áreas do SO
        // Caso isso aconteça o SO irá interromper o executável

        //int * p_numero2;    //Contem lixo como endereço 
        //*p_numero2 = 44;    //Escrevendo dado no endereço lixo  
        
        //Outra pessima pratica
        // Declarar e inicializar um ponteiro com nullptr
        // Um ponteiro que aponta para lugar nenhum
        // int * p_numero3 {nullptr}; ou int * p_numero3 {};

        //int * p_numero3 {};
        //*p_numero3 = 55;

        //std::cout << *p_numero3 << " - " << p_numero3 << '\n'; // Lendo de um nullptr, ocorrerá um CRASH

    //Dynamic Heap Memory

        int * p_heap_numero1 {nullptr}; //Forma segura de declarar e inicializar um ponteiro
        p_heap_numero1 = new int;       // Dinamicamente aloca espaço para uma unidade de int na heap
                                        // O sistema operacional não pode usar essa memoria ate que seja
                                        // retornada.
                                        // A quantidade de espaço alocado na heap será baseada no tipo apontado
                                        // pelo ponteiro "new 'int' ".
                                        // Ao usar "new" é necessario usar "delete" em algum momento proximo
                                        // para avisar ao SO que não é mais necessario aquela área de memoria 
                                        // na heap.
        *p_heap_numero1 = 44;
        std::cout << '\n';
        std::cout << "p_heap_numero4 : " << p_heap_numero1 << '\n';
        std::cout << "*p_heap_numero4 : " << *p_heap_numero1 << '\n';

        delete p_heap_numero1;          // Liberando a memoria na heap, porém apos deletar é seguro atribuir 
        p_heap_numero1 = nullptr;	    // nullptr, pois este ponteiro estará apontando para lixo
                                        // A partir do momento que foi feito o reset de memoria para nullptr
                                        // O proximo que for usa esta variavel, inicialize com um endereço valido

        // Outras formas de inicializar um ponteiro para um endereço VALIDO

        int * p_heap_numero2{ new int };    // Memoria para 1 unidade de inteiro alocada na heap, a localização da memoria contem lixo
        int * p_heap_numero3{ new int(22) }; // Inicialização direta
        int * p_heap_numero4{ new int{44} }; // Inicialização uniforme   

        std::cout << '\n';
        std::cout << "Inicializacao com endereco valido!!" << '\n';
        std::cout << "p_heap_numero2 : " << p_heap_numero2 << ", *p_heap_numero2 : " << *p_heap_numero2 << '\n';
        std::cout << "p_heap_numero3 : " << p_heap_numero3 << ", *p_heap_numero3 : " << *p_heap_numero3 << '\n';
        std::cout << "p_heap_numero4 : " << p_heap_numero4 << ", *p_heap_numero4 : " << *p_heap_numero4 << '\n';

        //Liberando a memoria de p_heap_numero1 e resetando para nullptr
        delete p_heap_numero1;
        p_heap_numero1 = nullptr;
        //Liberando a memoria de p_heap_numero2 e resetando para nullptr
        delete p_heap_numero2;
        p_heap_numero2 = nullptr;
        //Liberando a memoria de p_heap_numero3 e resetando para nullptr
        delete p_heap_numero3;
        p_heap_numero3 = nullptr;

        //Reutilizando os ponteiros

        p_heap_numero2 = new int {356};
        std::cout << '\n';
        std::cout << "Reutilizando o ponteiro apos liberar a memoria e resetar para nullptr" << '\n';
        std::cout << "p_heap_numero2 : " << p_heap_numero2 << ", *p_heap_numero2 : " << *p_heap_numero2 << '\n';
        delete p_heap_numero2;
        p_heap_numero2 = nullptr;

    return 0;
}