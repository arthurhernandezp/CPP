#include <iostream>
#include <vector>

class Comodo{
public:
    float m_Area{};
    float m_Altura{};
    std::pair<float,float> m_dimensao_do_piso{};
    std::vector<std::string> m_mobiliario{};
    std::string m_tipo_do_piso{};
    std::string m_path_esquema_eletrico{};

    virtual void limpar() const = 0;

    void calcula_area(){
        m_Area = m_dimensao_do_piso.first * m_dimensao_do_piso.second;
    }

    void add_mobilia(std::string mobilia){
        m_mobiliario.push_back(mobilia);
    }

    void remove_mobilia(){
        if(!m_mobiliario.empty()){
            m_mobiliario.pop_back();
        }
    }

    virtual ~Comodo(){ }
};

class Cozinha : public Comodo{
public:

    std::string m_path_esquema_hidraulico{};

    void limpar(){
        std::cout << "Pegando agua sanitaria" << '\n';
        std::cout << "Passando no " << m_tipo_do_piso << '\n';
        std::cout << "Limpando fogão" << '\n';
        for( std::string item : m_mobiliario){
            std::cout << "Limpando o item " << item << '\n';
        }
    }

    Cozinha(){}

    Cozinha(float altura, std::pair<float,float> dimensao, std::vector<std::string> mob, std::string piso, std::string path_esq_el,std::string path_esq_hid) : m_path_esquema_hidraulico(path_esq_hid){
        m_Altura = altura;
        m_dimensao_do_piso = dimensao;
        m_mobiliario = mob;
        m_tipo_do_piso = piso;
        m_path_esquema_eletrico = path_esq_el;
    }

    ~Cozinha();
};

class Banheiro : public Comodo{
public:

    std::string m_path_esquema_hidraulico{};

    void limpar() const override{
        std::cout << "Iniciando a limpeza no banheiro" << '\n';
        std::cout << "Pegando agua sanitaria" << '\n';
        std::cout << "Passando no " << m_tipo_do_piso << '\n';
        for( std::string item : m_mobiliario){
            std::cout << "Limpando o item " << item << '\n';
        }
    }

    Banheiro(){
        std::cout << "Iniciando o construtor do Banheiro" << '\n';
    }

    Banheiro(float altura, std::pair<float,float> dimensao, std::vector<std::string> mob, std::string piso, std::string path_esq_el,std::string path_esq_hid) : m_path_esquema_hidraulico(path_esq_hid){
        std::cout << "Iniciando o construtor com parametros do Banheiro" << '\n';
        m_Altura = altura;
        m_dimensao_do_piso = dimensao;
        m_mobiliario = mob;
        m_tipo_do_piso = piso;
        m_path_esquema_eletrico = path_esq_el;
    }

    ~Banheiro(){};
};

class Quarto : public Comodo{
public:

    void limpar() const override{
        std::cout << "Iniciando a limpeza no Quarto" << '\n';
        std::cout << "Varrendo " << '\n';
        std::cout << "Passando pano no " << m_tipo_do_piso << '\n';
        for( auto & item : m_mobiliario){
            std::cout << "Limpando o item " << item << '\n';
        }
    }

    Quarto(){
        std::cout << "Iniciando o construtor do Quarto" << '\n';
    }

    Quarto(float altura, std::pair<float,float> dimensao, std::vector<std::string> mob, std::string piso, std::string path_esq_el,std::string path_esq_hid){
        std::cout << "Iniciando o construtor com parametros do Quarto" << '\n';

        m_Altura = altura;
        m_dimensao_do_piso = dimensao;
        m_mobiliario = mob;
        m_tipo_do_piso = piso;
        m_path_esquema_eletrico = path_esq_el;
    }

    ~Quarto(){};
};

int main(){
    Quarto q(3,{10.0,3.3},{"Cama","Ventilador"},"Taco","D:/Deep/Seed/Solutions/","D:/Deep/Seed/Solutions/");
    q.calcula_area();
    std::cout << "Area: " << q.m_dimensao_do_piso.first << 'x' << q.m_dimensao_do_piso.second << " = " << q.m_Area;
    q.limpar();
    q.add_mobilia("Televisao");
    q.limpar();
    return 0;
}
