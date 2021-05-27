#include <iostream>
#include <string>
using namespace std;

float media;

class Aluno {

private:
    int codigo;
    string nome;
    float nota;
    float nota1;
    float nota2;
    float notas[2] = {0.0, 0.0};

public:
    // construtor
    Aluno(int codigo, string nome) {
        this->setCodigo(codigo);
        this->setNome(nome);
        cout << "objeto alocado" << endl;
    }

    // Aluno() {
    //     this->setCodigo(1);
    //     this->setNome("");
    // }

    ~Aluno() {
        cout << "objeto destruído" << endl;;
    }

    Aluno(const Aluno &a) {
        this->codigo = a.codigo;
        this->nome = a.nome;
    }

    // getters - accessor methods
    int getCodigo() {
        return codigo;
    }

    // setters - mutator methods
    void setCodigo(int codigo) {
        if (codigo <= 0) {
            codigo = (-1) * codigo;
        }
        this->codigo = codigo;
    }

    string getNome() {
        return nome;
    }

    void setNome(string nome) {
        this->nome = nome;
    }
    
    float getNota() {
        return nota;
    }

    void setNota(float nota) {
    // void setNota(float &nota) {
        this->nota = nota;
        // nota = 0.0;
    } 

    float getNota1() {
        return nota1;
    }

    void setNota1(float nota1) {
        this->nota1 = nota1;
    } 

    float getNota2() {
        return nota2;
    }

    void setNota2(float nota2) {
        this->nota2 = nota2;
    } 

    /**********************************/

    // float calculaMedia() {
    //     return (nota1 + nota2) / 2;
    // }

    float *calculaMedia() {
        media = (nota1 + nota2) / 2;

        return &media;
    }

    float *getNotas() {
        return notas;
    }

    void setNotas(float notas[]) { // *notas ou notas[2]
        this->notas[0] = notas[0];
        this->notas[1] = notas[1];

    }

    float calculaMediaNotas() {
        float media = 0.0f;
        
        // for (int i=0; i <= 1; i++) {
        //     media += notas[i];
        // }
        
        float *p = &notas[0];
        media = media + *p;
        p++; // pula para próximo elemento no array
        media = media + *p;

        return media / 2;
    }

};

int main() { 
    // Aluno *a1 = new Aluno(100, "João"); // heap
    // a1->setCodigo(-500);
    // cout << a1->getCodigo() << endl;
    // cout << a1->getNome() << endl;

    // delete a1;

    // Aluno a2(200, "Maria"); // stack
    // a2.codigo = 200;
    // cout << a2.getCodigo() << endl;
    // cout << a2.getNome() << endl;

    // Aluno a3;
    // cout << a3.getCodigo() << endl;
    // cout << a3.getNome() << endl;

    // Aluno x(100, "João");
    // Aluno y = x;
    // cout << x.getCodigo() << endl;
    // cout << x.getNome() << endl;    
    // cout << y.getCodigo() << endl;
    // cout << y.getNome() << endl;

    // Aluno *x = new Aluno(100, "João");
    // delete x;

    // int a = 10;
    // int b = 20;
    // int &x = a;
    // cout << "a = " << &a << endl;
    // cout << "b = " << &b << endl;
    // cout << "x = " << &x << endl;
    // a = 35;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "x = " << x << endl;

    // Aluno a1(100, "João");
    // float notaAluno = 5.5;
    // a1.setNota(notaAluno);
    // cout << a1.getNota() << endl;
    // cout << notaAluno << endl;
    // float n1 = 5.5;
    // float n2 = 7.8;
    // a1.setNota1(n1);
    // a1.setNota2(n2);
    // // cout << a1.calculaMedia() << endl;
    // cout << *(a1.calculaMedia()) << endl; // *(...)  desfaz referência

    // int a = 10;
    // int b = 20;
    // int *x = &a;
    // int &y = b;
    // int *z; // aponta pra NULL
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "x = " << *x << endl;
    // a = -35;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "x = " << *x << endl;
    // x = &b;

    Aluno a(100, "João");
    float n[2] = {10.0, 8.5};
    a.setNotas(n);
    cout << a.calculaMediaNotas() << endl;    

    return 0;
}