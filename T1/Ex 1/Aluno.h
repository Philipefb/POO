#include <string>

#ifndef ALUNO_H
#define ALUNO_H



class Aluno
{
	public:
		Aluno(int RA, std::string nome, double p1, double p2, double t1); //construtor
		int getRA();
		std::string getNome();
		double media(); //calcula a media do aluno
		bool aprovado(); //retorna 1 se o aluno estiver aprovado e 0 se estiver reprovado
		bool sac(); //retorna 1 se o aluno estiver de sac
		double notaSAC(); //calcula a nota necessaria para o aluno ser aprovado no sac
		
		
	protected:
		int RA;
		std::string nome;
		double p1;
		double p2;
		double t1;
};

#endif
