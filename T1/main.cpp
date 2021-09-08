#include <iostream>
#include <string>
#include "Aluno.h"

using namespace std;

int main() {
	string a;
	
	Aluno aluno1(726579,"joaozim", 5,4.5,8);
	cout << aluno1.getRA() << endl;
	cout << aluno1.getNome() << endl;
	cout << aluno1.media() << endl;
	cout << aluno1.aprovado() << endl;
	cout << aluno1.sac() << endl;
	cout << aluno1.notaSAC() << endl;
	

	return 0;
}
