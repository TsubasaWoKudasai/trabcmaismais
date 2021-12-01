#include <iostream>
#include <fstream>

char menu ();

bool cadastraalunos ();

bool listaalunos();

void testealuno ();

void aprovacaoaluno ();

bool leituradoarquivo();

struct aluno {
std::string nome;
std::string matricula;
float notaaep1;
float notaaep2;
float notaprova1;
float notaprova2;
float sub;
float mediatotal;
std::string statusaprova;
}
typedef alunos ;
alunos aluno [100]; 
// a quantidade do array pode mudar e obvio, mas esse foi um padrao baixo apenas para testes
