#include <iostream>
#include <string>
#include "aluno.h"
using namespace std;
using namespace graduacao;

int main() {

    Aluno a(100, "João");
    float n[2] = {10.0, 8.5};
    a.setNotas(n);

    cout << a.calculaMedia() << endl;
    
    Professor p;

    p.alteraNotaAlunoGraduacao(a, 3.0, 4.0);

    cout << a.calculaMedia() << endl;

    return 0;
}
