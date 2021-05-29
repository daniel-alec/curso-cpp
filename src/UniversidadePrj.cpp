#include <iostream>
#include <string>
#include "aluno.h"
using namespace std;
using namespace graduacao;

int main() {

    Aluno a("João");

    Aluno a2("Maria");

    Aluno z("Pedro");

    cout << a.getCodigo() << endl;

    cout << a2.getCodigo() << endl;

    cout << z.getCodigo() << endl;

//	graduacao::Aluno::imprimeSaudacao();

    return 0;
}
