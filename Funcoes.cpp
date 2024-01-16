#include <iostream>
#include "Funcoes.h"

using namespace std;

float StartCalc() {
	float Valor01;
	float Valor02;
	char Operador;
	float Result;

	cout << "\n" <<"Insira o primeiro valor" << endl;
	cin >> Valor01;
	cout << "Insira o operador" << endl;
	cin >> Operador;
	cout << "\n" << "Insira o segundo valor" << endl;
	cin >> Valor02;
	Result = Calcular(Valor01, Operador, Valor02);
	
	return Result;
}

float Calcular(float Valor01, char Operador, float Valor02)
{
	float Result;

	switch (Operador) {

	case '*':
		Result = (Valor01 * Valor02);
		break;
	case '/':
		Result = (Valor01 / Valor02);
		break;
	case '+':
		Result = (Valor01 + Valor02);
		break;
	case '-':
		Result = (Valor01 - Valor02);

	}
	return Result;
}