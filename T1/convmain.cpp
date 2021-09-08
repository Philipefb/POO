#include <iostream>
#include <string>
#include "Conversor.h"

using namespace std;

int main(){
	Conversor c1(2.5,2.0);
	c1.imprimeTaxas();
	cout << "Quantia de dolares resultada da compra com 10 reais: " << c1.compraDolar(10) << endl;
	cout <<  "Quantia de reais resultada da venda de 10 dolares: " << c1.vendeDolar(10) << endl;

}