#include <iostream>
#include "Conversor.h"

using namespace std;

//construtor
Conversor::Conversor(double tx_compra, double tx_venda){

    this->TxCompra = tx_compra;
    this->TxVenda = tx_venda;
}

//transforma dolar em real
double Conversor::vendeDolar(double dol){
    int total = 0;
    
    total = dol * this->TxVenda;

    return total;
}

//transforma real em dolar
double Conversor::compraDolar(double real){
    int total = 0;

    total = real/this->TxCompra;

    return total;
}

//imprime as taxas na tela
void Conversor::imprimeTaxas(){
	cout << "Taxa de compra: " << TxCompra << endl;
	cout << "Taxa de venda: " << TxVenda << endl;
}

//getters & setters
double Conversor::getTxCompra() const{
	return TxCompra;
}
    
void Conversor::setTxCompra(double tcompra){
   	this->TxCompra = tcompra;
}

double Conversor::getTxVenda() const{
	return TxVenda;
}    

void Conversor::setTxVenda(double tvenda){
	this->TxVenda = tvenda;
}