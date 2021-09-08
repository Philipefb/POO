#ifndef DATA_H
#define DATA_H

class Data
{
	public:
        Data(int, int, int); //construtor
        int compara(Data&); //compara as datas
        int getDia() const;
        int getMes() const; 
        int getAno() const;
        std::string getMesExtenso(); // escreve o nome do mes
        void imprime(); //mostra a data na tela

	private:
        int dia;
        int mes;
        int ano;
};

#endif
