#ifndef ALUNO_H_
#define ALUNO_H_

#include <string>
#include "professor.h"
using namespace std;

namespace posgraduacao {
	class Aluno {
	};
}

namespace graduacao {
    
    class Aluno {

    private:
        int codigo;
        string nome;

        float notas[2] = {0.0, 0.0};

    public:
        // Constructor
        Aluno(int codigo, string nome);
        ~Aluno();
        
        // getters - access methods
        int getCodigo();
        string getNome();
        float *getNotas();

        // setters - mutator methods
        void setCodigo(int codigo);
        void setNome(string nome);
        void setNotas(float *notas);
        
        float calculaMedia();

//        friend void Professor::alteraNotaAlunoGraduacao(Aluno &a, float n1, float n2);
        friend class Professor;
    };
}

#endif /* ALUNO_H_ */
