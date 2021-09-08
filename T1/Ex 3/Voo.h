#include "Data.h"

#ifndef VOO_H
#define VOO_H

class Voo
{
public:
    Voo(int nrVoo, Data dataVoo, std::string hora); //construtor
    int proximoLivre();  //verifica a proxima poltrona livre
    bool verifica(int); //verifica se a poltrona esta ocupada
    bool ocupa(int); //ocupa a poltrona
    bool desocupa(int); //desocupa a poltrona
    int vagas(); //mostra quantas poltronas estao disponiveis
    void imprime(); //mostra as informaçoes do voo

    int getNumero() const;
	void setNumero(int numero);
	std::string getHora() const;
	void setHora(std::string hora);

    ~Voo();

private:
    std::string hora;
    int *poltrona; 
    int nrVoo;
    Data dataVoo;

};

#endif