#include <iostream>
#include "Data.h"

class Voo{
    public:
        Voo(int nrVoo, Data dataVoo, std::string hora); //construtor
        int proximoLivre();  //verifica a proxima vaga livre
        bool verifica(int); //verifica se a vaga esta ocupada
        bool ocupa(int); //ocupa a vaga
        bool desocupa(int); //desocupa a vaga
        int vagas(); //mostra quantas vagas estao disponiveis
        void imprime(); //mostra as informaçoes do voo


    private:
        std::string hora;
        int vaga[100]; 
        int nrVoo;
        Data dataVoo;

};

Voo::Voo(int nrVoo, Data dataVoo, std::string hora){

    this->nrVoo = nrVoo;
    this->hora = hora;
    this->dataVoo = dataVoo;

    for(int i = 0; i < 100; i++)
        this->vaga[i] = 0; //inicia com todas as vagas desocupadas(0 para desocupada e 1 para ocupada)
}