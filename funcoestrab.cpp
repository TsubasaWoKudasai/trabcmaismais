#include "headertrab.h"

char 	menu (){
	char escolha = ' ';
	std::cout << "\n==============================";
	std::cout << "\n=======PROJETO FINAL==========";
	std::cout << "\n==============================";
	std::cout << "\n==SELECIONE UMA OPCAO ABAIXO==";
	std::cout << "\n=========DIGITE A LETRA=======";
	std::cout << "\n==========C - CADASTRO========";
	std::cout << "\n==========L - LER=============";
	std::cout << "\n==========F - FINALIZAR=====\n";
	std::cin >> escolha;
	system("cls");
	return escolha;
}
 //////// funcao que cadastra os alunos de fato, ela usa a estrutura da struct aluno
 /////// e entao ela relanca esssa funcao quando chamada a funcao de teste, tendo essa como uma especie de parametro de funcionalidade.
bool cadastraalunos (alunos aluno){ 
	std:: ofstream arquivo;
		arquivo.open("txttrab.txt", std::fstream::app);
		arquivo << aluno.nome << ";" ;
		arquivo << aluno.matricula << ";" ;
		arquivo << aluno.notaaep1 << ";" ;
		arquivo << aluno.notaprova1 << ";" ;
		arquivo << aluno.notaaep2 << ";" ;
		arquivo << aluno.notaprova2 << ";" ;
		arquivo << aluno.sub << ";" ;
		arquivo << aluno.statusaprova << ";" ;
		
		arquivo.close ();
		return true;
	}
		

void testealuno (){
	alunos alunoteste;
	alunoteste.nome = "joao";
	alunoteste.matricula = "0001";
	alunoteste.notaaep1 = 1.4;
	alunoteste.notaprova1 = 5.0;
	alunoteste.notaaep2 = 1.3;
	alunoteste.notaprova2 = 6.5;
	alunoteste.mediatotal = 0;
	alunoteste.sub = 0;
	alunoteste.statusaprova = "??";
	
	
	if (cadastraalunos (alunoteste)) {
		std::cout << "aluno cadastrado\n";
	} else {
		std::cout << "erro de cadastro do aluno \n";
	}
	
	
}
bool leituradoarquivo(){
		std::ifstream arquivo;
		arquivo.open("txttrab.txt");

		std:: string linha;
		int indexalunos = 0;
		while (std::getline(arquivo, linha)){
			int coluna = 0;
			int controleColuna = 0;
			std:: string conteudoLinha = "";
			
			for(int i = 0; i <= linha.size(); i++){
				if(coluna == 1 && controleColuna == 0) {
					aluno[indexalunos].nome = conteudoLinha;
					conteudoLinha = "";
					controleColuna = 1;
				}
				else if(coluna == 2 && controleColuna == 1){
					aluno[indexalunos].matricula = conteudoLinha;
					controleColuna = 2;
				}

				if(linha[i] == ';'){
					coluna++;
					continue;
				}
				
			}
			indexalunos++;
		}
		arquivo.close();
	
	for (int i = 0; i < 100; i++) {
		std::cout << "Aluno n " << i+1 << "\n";
		std::cout << "Nome: " << aluno[i].nome << "\n";
		std::cout << "Matricula: " << aluno[i].matricula << "\n";
	}
}



