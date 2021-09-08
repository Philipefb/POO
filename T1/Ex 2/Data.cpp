#include <iostream>
#include <iomanip>
#include "Data.h"

using namespace std;

//construtor
Data::Data(int dia, int mes, int ano){ 
    if(dia < 0 || mes < 0 || ano < 0 || dia > 31 || mes > 12 || ano > 2019){ //caso a data seja invalida colocar 01/01/0001
        dia = 01;
        mes = 01;
        ano = 0001;
    }
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

//getters
int Data::getDia() const{
    return dia;
}

int Data::getMes() const{
    return mes;
}

int Data::getAno() const{
    return ano;
}

//retorna -1 caso a data2 eh maior que a data corrente, 0 caso sejam iguais e 1 caso a data2 eh menor que a data1
int Data::compara(Data& data2){
    if(data2.ano == this->ano && data2.mes == this->mes && data2.dia == this->dia) //compara se as datas sao iguais
        return 0;
    //compara se a data2 eh maior que a data corrente
    if(data2.ano > this->ano){ //compara os anos
        return -1;    
    }else if(data2.ano == this->ano && data2.mes > this->mes){ //compara os meses caso os anos sejam iguais
        return -1;
    }else if(data2.ano == this->ano && data2.mes == this->mes && data2.dia > this->dia){ //compara os dias caso os anos e os meses sejam iguais
        return -1;
    }
    //compara se a data2 eh menor que a data corrente
    if(data2.ano < this->ano){//compara os anos
        return 1;
    }else if(data2.ano == this->ano && data2.mes < this->mes){ //compara os meses caso os anos sejam iguais
        return 1;
    }else if(data2.ano == this->ano && data2.mes == this->mes && data2.dia < this->dia){ //compara os dias caso os anos e os meses sejam iguais
        return 1;
    }
}

//retorna o nome do mes da data
string Data::getMesExtenso() {
    if(Data::getMes() == 1){
        return "Janeiro";
    }else if(Data::getMes() == 2){
        return "Fevereiro";
    }else if(Data::getMes() == 3){
        return "Março";
    }else if(Data::getMes() == 4){
        return "Abril";
    }else if(Data::getMes() == 5){
        return "Maio";
    }else if(Data::getMes() == 6){
        return "Junho";
    }else if(Data::getMes() == 7){
        return "Julho";
    }else if(Data::getMes() == 8){
        return "Agosto";
    }else if(Data::getMes() == 9){
        return "Setembro";
    }else if(Data::getMes() == 10){
        return "Outubro";
    }else if(Data::getMes() == 11){
        return "Novembro";
    }else if(Data::getMes() == 12){
        return "Dezembro";
    }
}

//imprime a data no formato DD/MM/YYYY
void Data::imprime(){
    cout << setfill ('0') << setw(2) << dia;
    cout << "/";
    cout << setfill ('0') << setw(2) << Data::getMes();
    cout << "/" << Data::getAno() << endl;
}