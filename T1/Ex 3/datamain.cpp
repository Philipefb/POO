#include <iostream>
#include "Data.h"
#include "Voo.h"

using namespace std;

int main () {

    Data data1(5,11,1997);
    Data data2(23,6,1900);
    Voo voo1(1337, data1, "14:00");
    Voo voo2(1337, data2, "14:00");

    cout << data1.getDia() << endl;
    cout << data1.getAno() << endl;
    cout << data1.getMesExtenso() << endl;
    data1.imprime();
    cout << data1.compara(data2) << endl;

    voo1.imprime();
    cout << voo1.ocupa(50) << endl;
    cout << voo1.ocupa(50) << endl;
    cout << voo1.desocupa(50) << endl;
    cout << voo1.desocupa(50) << endl;
    cout << voo1.verifica(50) << endl;
    cout << voo1.ocupa(1) << endl;
    cout <<"Ocupa 2" << voo1.ocupa(2) << endl;
    cout <<voo1.ocupa(3) << endl;
    cout << voo1.ocupa(4) << endl;
    cout << voo1.ocupa(5) << endl;
    cout <<"Proximo livre: " << voo1.proximoLivre() << endl;
    voo1.imprime();


}