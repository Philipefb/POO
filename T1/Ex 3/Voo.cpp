#include <iostream>
#include <string>
#include <cstdlib>
#include "Voo.h"

using namespace std;

//construtor
Voo::Voo(int nrVoo, Data dataVoo, string hora){

    this->nrVoo = nrVoo;
    this->dataVoo = dataVoo;
    this->hora = hora;
   
    poltrona = (int*)malloc(100*sizeof(int));

    for(int i = 0; i < 100; i++)
        poltrona[i] = 0; //inicia todas as poltronas com 0(desocupadas)
}

//getters e setters
int Voo::getNumero() const{
	return nrVoo;
}
void Voo::setNumero(int nrVoo){
	this->nrVoo = nrVoo;
}

string Voo::getHora() const{
    return hora;
}

void Voo::setHora(string hora){
    this->hora == hora;
}

//destrutor
Voo::~Voo(){
    free (this->poltrona);
}

int Voo::proximoLivre(){ //retorna a proxima poltrona livre, se nao houver retorna 0
    int i = 0;

    while(poltrona[i] == true && i < 100)
        i++;
    if(i > 0)    
        return i+1;
    else
        return 0;
}

bool Voo::verifica(int lugar){
    if(poltrona[lugar - 1] == 1)
        return 1; //a poltrona esta ocupada 
    else    
        return 0; //a poltrona esta desocupada
}

bool Voo::ocupa(int lugar){
    if(poltrona[lugar - 1] == 0){ //se a poltrona estiver desocupada retorna 1 e a torna ocupada
        poltrona[lugar - 1] = 1; 
        return 1;
    }
    else
       return 0;
}

bool Voo::desocupa(int lugar){
    if(poltrona[lugar - 1] == 1){
        poltrona[lugar - 1] = 0; //desocupa a poltrona do desejada
        return 1;
    }else
        return 0;
}

int Voo::vagas(){
    int aux = 0;
    for(int i = 0; i < 100; i++)
        if(poltrona[i] == 0) //para cada poltrona desocupada
            aux++; 
    
    return aux;
}

//mostra os dados do Voo(numero, data, assentos disponiveis e horario)
void Voo::imprime(){
    cout << "Numero do Voo: " << nrVoo << endl;
    dataVoo.Data::imprime();
    cout << "Horario do Voo: " << hora << endl;
    cout << "Quantidade de vagas disponiveis: " << Voo::vagas() << endl; 
}