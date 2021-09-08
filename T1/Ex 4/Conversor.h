#include <string>

#ifndef CONVERSOR_H
#define CONVERSOR_H

class Conversor
{
public:
    Conversor(double, double); 
    void imprimeTaxas(); //mostra as taxas na tela
    double vendeDolar(double); //transforma dolar em real
    double compraDolar(double); //transforma real em dolar

    double getTxCompra() const;
    void setTxCompra(double); 

    double getTxVenda() const;
    void setTxVenda(double);

private:
    double TxCompra;
    double TxVenda;
};


#endif