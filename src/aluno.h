#ifndef ALUNO_H_
#define ALUNO_H_

#include <string>
using namespace std;

namespace graduacao {
    
    class Aluno {

    private:
        int codigo;
        string nome;

        float notas[2] = {0.0, 0.0};

    public:
        // construtor
        Aluno(int codigo, string nome);
        ~Aluno();
        
        // getters - accessor methods
        int getCodigo();
        string getNome();
        float *getNotas();

        // setters - mutator methods
        void setCodigo(int codigo);
        void setNome(string nome);
        void setNotas(float *notas);
        
        float calculaMedia();
    };
}

#endif /* ALUNO_H_ */