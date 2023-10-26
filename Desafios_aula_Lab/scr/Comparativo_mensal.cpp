#include <iostream>

using namespace std;

//Cabecalho
float maior(float *vetor);
float menor(float *vetor);
float fat_maior(float *vetor);

#define TAM 6
int size = TAM;

//Funcao principal
int main()
{
	float vet[TAM];
	int contador = 0, size;
	
	//Entrada de dados
	for(int i = 0; i < TAM; i++)
	{
		cout << "Numeros: ";
		cin >> vet[i];
		if((vet[i] == 0) || (vet[i] == NULL) )
			contador++;
	}
	
	//Dirando de TAM
	size = TAM - contador; 

	//Saida e chamada das funcoes
	cout << "Menor valor de faturamento em um dia no ano: " << menor(vet) << endl;
	cout << "Maior valor de faturamento em um dia no ano: " << maior(vet) << endl;
	cout << "Numero de dias no mes em que o valor de faturamento diario foi superior a media mensal: " << fat_maior(vet) << endl;
	
	return 0;

}

//Achar o maior
float maior(float *vetor)
{
	float max;
	int  i;
	
	for(i = 0; i < size; i++)
	{
		if(i == 0)
			max = vetor[i];
		else
		{
			if(vetor[i] > max)
				max = vetor[i];
		}
	}
	
	return max;
}

//Achar o menor
float menor(float *vetor)
{
	float min;
	int  i;
	
	for(i = 0; i < size; i++)
	{
		if(i == 0)
			min = vetor[i];
		else
		{
			if(vetor[i] < min)
				min = vetor[i];
		}
	}
	
	return min;
}

//Numero de dias no mes em que o valor de faturamento diario foi superior a media mensal
float fat_maior(float *vetor)
{
	float media;
	int i, quant = 0;
	
	//Calcular média
	for (i = 0; i < size; i++)
	{
		media += vetor[i];
	}
	media = media/size;
	
	//Comparando
	for(i = 0; i< size; i++)
	{
		if(vetor[i] > media)
			quant++;
	}
	
	return quant;
}

//by TheYanVictor
