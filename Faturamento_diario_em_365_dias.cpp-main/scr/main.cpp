/* Este programa visa achar o maior e o menor faturamento de uma empresa, assim como a quantidade
de dias em que o faturamento diario foi maior que a media anual*/

#include <iostream>

using namespace std;

//Cabecalho
float maior(float *vetor);
float menor(float *vetor);
float fat_maior(float *vetor);

//Funcao principal
int main()
{
	float vet[365];
	
	//Entrada de dados
	for(int i = 0; i < 365; i++)
	{
		cout << "Numeros: ";
		cin >> vet[i];
	}
	
	//Saida e chamada das funcoes
	cout << "Menor valor de faturamento em um dia no ano: " << menor(vet) << endl;
	cout << "Maior valor de faturamento em um dia no ano: " << maior(vet) << endl;
	cout << "Numero de dias no ano em que o valor de faturamento diario foi superior a media anual: " << fat_maior(vet) << endl;
	
	return 0;

}

//Achar o maior
float maior(float *vetor)
{
	float max;
	int  i;
	
	for(i = 0; i < 365; i++)
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
	
	for(i = 0; i < 365; i++)
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

//Numero de dias no ano em que o valor de faturamento diario foi superior a media anual
float fat_maior(float *vetor)
{
	float media;
	int i, quant = 0;
	
	//Calcular média
	for (i = 0; i < 365; i++)
	{
		media += vetor[i];
	}
	media = media/365;
	
	//Comparando
	for(i = 0; i< 365; i++)
	{
		if(vetor[i] > media)
			quant++;
	}
	
	return quant;
}

//by TheYanVictor
