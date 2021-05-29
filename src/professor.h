/*
 * professor.h
 *
 *  Created on: 28 de mai de 2021
 *      Author: daniel
 */
#include "aluno.h"

#ifndef SRC_PROFESSOR_H_
#define SRC_PROFESSOR_H_

// forward declaration class
namespace graduacao {
	class Aluno;
}

class Professor {
public:
	Professor();
	~Professor();

	void alteraNotaAlunoGraduacao(graduacao::Aluno &a, float n1, float n2);
};

#endif /* SRC_PROFESSOR_H_ */
