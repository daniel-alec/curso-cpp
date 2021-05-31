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
        //Constructor
        Aluno(string nome);
        //Construtor de cópida
        Aluno(const Aluno &a);
        //Destrutor de classe
        ~Aluno();
        
        // getters - access methods
        int getCodigo();
        string getNome();
        float *getNotas();

        // setters - mutator methods
        void setCodigo(int codigo);
        void setNome(string nome);
        void setValorMensalidade(double valorMensalidade);
        void setNotas(float *notas); // ou notas[]
        float calculaMedia();

        //Função amiga declarada na classe Professor
        friend void Professor::alteraNotaAlunoGraduacao(Aluno &a, float n1, float n2);
//        friend class Professor;

        // Função estática
        static int getProxCodigo();

        double calculaValorMensalidade();

        // Função Virtual
        // amarração tardia - puro ( = 0)  -> !!!torna a Classe Abstrata!!!
//        virtual void imprimeSaudacao() = 0;

        // Função Virtual
        virtual void imprimeSaudacao();
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

		// sobreposição de métodos
		void imprimeSaudacao();

		// sobreposição de métodos - override
		double calculaValorMensalidade();

		// sobrecarga de método - overload
		double calculaValorMensalidade(double bonus);

	};
}

#endif /* ALUNO_H_ */
