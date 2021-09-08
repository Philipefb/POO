#include <iostream>
#include "Aluno.h"

using namespace std;

//Construtor da classe
Aluno::Aluno(int RA, string nome, double p1, double p2, double t1){
	this->RA = RA;
	this->nome = nome;
	this->p1 = p1;
	this->p2 = p2;
	this->t1 = t1;
}
//getters
int Aluno::getRA(){
	return RA;
} 

string Aluno::getNome(){
	return nome;
} 

//calculo da media do aluno
double Aluno::media(){
	double media;
	
	media = (p1*7 + p2*7 + t1*6)/20;
	
	return media;
} 
//retorna 1 se o aluno for aprovado ou 0 se o aluno estiver reprovado
bool Aluno::aprovado(){
	if(Aluno::media() >= 6){ //aprovado caso a media for maior que 6
		return true;
	}
	else{
		return false;
	}
}
//retorna 1 se o aluno estiver em sac e 0 se nao estiver
bool Aluno::sac(){
	if(Aluno::media() >= 5 && Aluno::media() <=6){
		return true;
	}else
		return false;
}
//calcula a nota necessaria que o aluno precisa tirar no sac para ser aprovado com media 6
double Aluno::notaSAC(){
	double notasac;
	
	if(Aluno::media() >= 5 && Aluno::media() <=6){
		notasac = 12 - Aluno::media();
		return notasac;
	}
	else if(Aluno::media() >= 6 || Aluno::media() < 5)
		return 0;
}	
