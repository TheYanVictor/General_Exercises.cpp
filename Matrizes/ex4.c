/*Faça um Programa que lê uma matriz 3x3 digitada pelo usuário econta quantos números pares existem na matriz,imprimindo na tela o resultado e a matriz.*/
#include <stdio.h>

int main(void) {
  //Variaveis
  int matriz[3][3];
  int i,j, par = 0;

  //Entrada de dados
  printf("\nEntre com os dados da matriz:\n");
  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
        {
          printf("Elemento %d%d: ", i+1, j+1);
          fflush(stdin);
          scanf("%d", &matriz[i][j]);
          if(matriz[i][j]%2 == 0)
            par++;
        }
    }

  //Saida de dados
  printf("\nMatriz:\n");
  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
        {
          printf("%d\t", matriz[i][j]);
        }
      printf("\n");
    }
  printf("\nO numero de elementos pares eh: %d", par);
  
  return 0;
}