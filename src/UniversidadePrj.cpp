#include <iostream>
#include <string>
#include "aluno.h"
using namespace std;
using namespace graduacao;

int main() {

//	Aluno *maria = new Aluno("Maria");

	Aluno *joao = new AlunoPesquisador("João");

//	maria->imprimeSaudacao();

	// early binding - ligação antecipada
//	joao->imprimeSaudacao();

	// late binding
	joao->imprimeSaudacao();

    return 0;
}
