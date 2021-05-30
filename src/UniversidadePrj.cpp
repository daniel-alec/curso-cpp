#include <iostream>
#include <string>
#include "aluno.h"
using namespace std;
using namespace graduacao;

int main() {

    Aluno a("João");

    Aluno a2("Maria");

    Aluno z("Pedro");

    AlunoPesquisador x("José");

    cout << a.getCodigo() << endl;

    cout << a2.getCodigo() << endl;

    cout << z.getCodigo() << endl;

    cout << x.getCodigo() << endl;
    cout << x.getNome() << endl;


//	graduacao::Aluno::imprimeSaudacao();

    return 0;
}
