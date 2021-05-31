#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include "aluno.h"
using namespace std;
using namespace graduacao;

bool compara_codigo(Aluno x, Aluno y) {
	if (x.getCodigo() > y.getCodigo()) {
		return true;
	}
	else false;
}

int main() {

	vector<Aluno> meuVetor; //Cria um vetor de alunos
	vector<Aluno>::iterator i; // Cria um iterador de alunos

	Aluno a("João");
	Aluno b("Maria");
	Aluno c("José");

	meuVetor.push_back(a);
	meuVetor.push_back(b);
	meuVetor.push_back(c);

	for(i = meuVetor.begin(); i != meuVetor.end(); i++) {
		cout << (*i).getCodigo() << endl;
	}

	sort(meuVetor.begin(), meuVetor.end(), compara_codigo);
	for(i = meuVetor.begin(); i != meuVetor.end(); i++) {
		cout << (*i).getCodigo() << endl;
	}

	meuVetor.pop_back();
	meuVetor.pop_back();
	meuVetor.pop_back();

	return 0;
}
