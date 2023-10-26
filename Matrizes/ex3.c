/*Façaum Programa que cria uma matriz n x m preenchida comzeros e a imprime no formato de matriz*/
#include <stdio.h>

int main() {
  //variaveis
  int matriz[2][3];
  int i,j;

  //Preenchendo a matriz
  for(i = 0; i < 2; i++)
    {
      for(j = 0; j < 3; j++)
        {
          matriz[i][j] = 0;
        }
    }

  //saida de dados
  printf("\nMatriz de zeros: \n");
  for(i = 0; i < 2; i++)
    {
      for(j = 0; j < 3; j++)
        {
        printf("%d\t",  matriz[i][j]);
        }
      printf("\n");
    }
  
  return 0;
}