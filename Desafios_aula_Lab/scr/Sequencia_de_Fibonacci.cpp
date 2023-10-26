//Desafio TargetSistemas - Sequencia de Fibonacci

//Bibliotecas
#include <iostream>

using namespace std;

//Funcao de procura
bool search(int numero);
void creating();

//Tamanho do vetor e declarando
#define TAM 100
int vet[TAM];

//Funcao principal
int main()
{
	bool resp;
	int nume;
	
	//Chama a funcao de criar
	creating();
	
	//Entrada do numero
	cout << "Deseja verificar qual numero?" << endl;
	cin >> nume;
	
	//Chamada da funcao de busca
	resp = search(nume);
	
	if(resp == true)
		cout << "Sim, este numero esta na sequencia de Fibonacci" << endl;
	else
		cout << "Nao, este numero nao esta na sequencia de Fibonacci" << endl;
	
	return 0;
}
//Funcao de criar
void creating()
{
	//Variaveis
	int i;
	
	//Atribuindo valores
	vet[0] = 0;
	vet[1] = 1;
	for(i = 2; i < TAM; i++)
	{
		vet[i] = vet[i-2] + vet[i-1];
	}
	 
}

//Funcao de procura
bool search(int numero)
{
	//Variaveis
	int *pont_vetor[TAM];
	int i;
	bool resultado = false;
	
	//Indicando a direcao do ponteiro
	for (i = 0; i < TAM; i++)
	{
		pont_vetor[i] = &vet[i];
	}
	
	//Procurando
	for (i = 0; i < TAM; i++)
	{
		if(numero == *pont_vetor[i])
			resultado = true;	
	}
	
	return resultado;
}

//by TheYanVictor
