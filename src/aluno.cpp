#include <iostream>
#include "aluno.h"
using namespace std;

// inicializa atributo estático
int graduacao::Aluno::proxCodigo = 1;


//Construtor parametrizado
graduacao::Aluno::Aluno(string nome) {
	this->codigo = getProxCodigo();
	this->setNome(nome);
	this->valorMensalidade = 0.0;

	cout << "objeto criado" << endl;
}

//Construtor de cópida
graduacao::Aluno::Aluno(const Aluno &a) {
	this->codigo = a.codigo;
	this->nome = a.nome;

	cout << "objeto copiado" << endl;
}

//Destrutor da classe
graduacao::Aluno::~Aluno() {
	cout << "objeto destruído" << endl;
}

// getters - accessor methods
int graduacao::Aluno::getCodigo() {
    return codigo;
}

string graduacao::Aluno::getNome() {
    return nome;
}

float *graduacao::Aluno::getNotas() {
    return notas;
}

// setters
void graduacao::Aluno::setCodigo(int codigo) {
	if(codigo < 0) { //Se o valor de código for negativo
		this->codigo = (-1) * codigo; //O valor é convertido para positivo
	}
	else{
		this->codigo = codigo;
	}
}

void graduacao::Aluno::setNome(string nome) {
    this->nome = nome;
} 

void graduacao::Aluno::setNotas(float notas[]) { // *notas ou notas[2]
    this->notas[0] = notas[0];
    this->notas[1] = notas[1];
}

/***********************************************************************/
float graduacao::Aluno::calculaMedia() {
    float media = 0.0f;        
    
    float *p = &notas[0];
    media = media + *p;
    p++; // pula para próximo elemento no array
    media = media + *p;

    return media / 2;
}

/*************************************************/

int graduacao::Aluno::getProxCodigo() {
	return proxCodigo++;
}

/*************************************************/

double graduacao::Aluno::calculaValorMensalidade() {
	return valorMensalidade;
}

/*************************************************/

void graduacao::Aluno::imprimeSaudacao() {
	cout << "Olá eu sou o aluno " << getNome() << endl;
}

// virtual .. = 0 -> não tem implementação
//void graduacao::Aluno::imprimeSaudacao() {
//	cout << "Olá eu sou o aluno " << getNome() << endl;
//}

/*************************************************/
/*************************************************/
/*************************************************/


// Contrutor
graduacao::AlunoPesquisador::AlunoPesquisador(string nome) : Aluno(nome) {

}

// Destrutor
graduacao::AlunoPesquisador::~AlunoPesquisador() {

}

// Setters
void graduacao::AlunoPesquisador::setBolsa(double bolsa) {
	this->bolsa = bolsa;
}

void graduacao::AlunoPesquisador::setLinha(string linha) {
	this->linha = linha;
}

void graduacao::AlunoPesquisador::setOrientador(string orientador) {
	this->orientador = orientador;
}

void graduacao::AlunoPesquisador::imprimeSaudacao() {
	cout << "Olá eu sou o aluno pesquisador " << getNome() << endl;
}
