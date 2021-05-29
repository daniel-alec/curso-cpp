/*
 * professor.cpp
 *
 *  Created on: 28 de mai de 2021
 *      Author: daniel
 */

#include "professor.h"

Professor::Professor() {
	// TODO Auto-generated constructor stub

}

Professor::~Professor() {
	// TODO Auto-generated destructor stub
}

void Professor::alteraNotaAlunoGraduacao(graduacao::Aluno &a, float n1, float n2) {
	a.notas[0] = n1;
	a.notas[1] = n2;
}
