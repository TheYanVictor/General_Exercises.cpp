/*Faça um programa que armazena os nomes e idades de 10pessoas em uma matriz, e imprime o nome da pessoa maisnova*/
#include <iostream>
#include <stdio.h>
#include <string> 

using namespace std;

int main(void) {
  //variaveis
  string nome[10], jovem;
  int matriz[2][10];
  int j, nova = 99999;

  //Entrada de dados + processamentos
  cout <<  "\nInsira os dados: \n";
  for(j = 0; j < 10; j++)
    {
      cout << "Nome" << j+1 << ": ";
      cin >> nome[j];
      matriz[1][j] = j; //posição referente a string de nomes - vetor de baixo
      cout << "\nIdade: ";
      cin >> matriz[0][j];//valor da idade - vetor de cima
      if(matriz[0][j] < nova)
      {
        nova = matriz[0][j];
        jovem = nome[j];
      }
        
    }

  cout << jovem << " é o(a) mais novo(a) com " << nova << " anos!\n";
  
  return 0;
}