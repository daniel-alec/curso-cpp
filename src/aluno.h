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

        static int proxCodigo;

    protected:
        double valorMensalidade;

    public:
        // Constructor
        Aluno(string nome);
        ~Aluno();
        
        // getters - access methods
        int getCodigo();
        string getNome();
        float *getNotas();

        // setters - mutator methods
        void setNome(string nome);
        void setNotas(float *notas);
        
        float calculaMedia();

        //Função amiga declarada na classe Professor
        friend void Professor::alteraNotaAlunoGraduacao(Aluno &a, float n1, float n2);
//        friend class Professor;

        static void imprimeSaudacao();

        static int getProxyCodigo();
    };

	class AlunoPesquisador : public Aluno {

	private:
		string orientador;
		string linha;
		double bolsa;

	public:
		AlunoPesquisador(string nome);
		~AlunoPesquisador();

		double getBolsa();
		string getLinha();
		string getOrientador();

		void setBolsa(double bolsa);
		void setLinha(string linha);
		void setOrientador(string orientador);

		double calculaValorMensalidade() {
			return (valorMensalidade - (valorMensalidade * bolsa/100));
		}
	};
}

#endif /* ALUNO_H_ */
