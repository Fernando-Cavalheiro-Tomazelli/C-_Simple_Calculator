#include <iostream>
#include <tchar.h>
#include "Funcoes.h"


//Utilizar "using namespace" libera os atributos da biblioteca para
//ser usada sem necessidade de colocar o nome dela na frente de cada atributo.
using namespace std;


int main()
{
	//Comando para acentuar qualquer palavra de acordo com a lingua portuguesa;
	_tsetlocale(LC_ALL, _T("portuguese"));

	cout << "Bem Vindo Calculadora do Cavalheiro" << endl;

	bool Continuar{ 0 };
	char Resposta{ };
	do {
		float Resultado;

		Resultado = StartCalc();
		cout << "\n" << "O resultado da opera��o �: " << Resultado << endl;

		cout << "\n" << "Deseja realizar outra opera��o?" << endl << "\n" << "Caso sim, responda com 'S'." << "\n" << "Caso n�o, responda com 'N', ou feche ou aplicativo" << endl;
		cin >> Resposta;

		//Switch case respons�vel por conferir se o usu�rio respondeu "S" para
		//utilizar novamente a calculadora e continuar em looping.
		switch (Resposta) {


		case 's':
			Continuar = 1;
			break;
		case 'S':
			Continuar = 1;
			break;
		default:
			Continuar = 0;
		}
		

	} while(Continuar);
	return 0;
}