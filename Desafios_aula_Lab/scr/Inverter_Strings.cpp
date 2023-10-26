//Desafio TargetSistemas - Inverter string
//Bibliotecas
#include <iostream>
#include <string>

using namespace std;

//Funcao principla
int main()
{
	//Variaveis
	string regular[] ={"alberto", "bruno", "caio", "daniel", "everton", "fabio", "geraldo", "hilary", "ingrid", "jaqueline"} ; 
	string inverted[10];
	int i;
	
	
	//Inverter na inverted
	for (i = 0;i < 10; i++)
	{
		inverted[10 - i - 1] = regular[i];
	}
	
	//Mostrar ambas as strings
	for (i = 0;i < 10; i++)
	{
		cout << regular[i] << " - ";
	}
	cout << endl;
	for (i = 0;i < 10; i++)
	{
		cout << inverted[i] << " - ";
	}
	
}
