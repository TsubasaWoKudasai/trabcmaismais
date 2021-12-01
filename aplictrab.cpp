#include "funcoestrab.cpp"

int main () {
	char opcao = ' ';
	do {
	   opcao = menu();	
	   switch (opcao) {
	   		case 'C':
	   			testealuno();
	   		break;
	   		case 'L':
	   			leituradoarquivo();
	   		break;
	   		case 'F':
	   			std::cout << "Finalizando aplicacao...\n";
	   		break;
	   		default:
	   			std::cout << "Opcao invalida\n Tente Novamente!\n";
	   }
	} while(opcao != 'F');	
  }
