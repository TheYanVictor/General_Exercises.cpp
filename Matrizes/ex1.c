#include <stdio.h>

int main(void) {
  //Variaveis
  float matriz[3][5], soma = 0;
  int i, j;

  //Atribuição de valores
  matriz[0][0] = 5.0;
  matriz[0][1] = 4.5;
  matriz[0][2] = 7.0;
  matriz[0][3] = 5.2;
  matriz[0][4] = 6.1;
  matriz[1][0] = 2.1;
  matriz[1][1] = 6.5;
  matriz[1][2] = 8.0;
  matriz[1][3] = 7.0;
  matriz[1][4] = 6.7;
  matriz[2][0] = 8.6;
  matriz[2][1] = 7.0;
  matriz[2][2] = 9.1;
  matriz[2][3] = 8.7;
  matriz[2][4] = 9.3;

  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 5; j++)
        {
          soma += matriz[i][j];
        }
    }

  //Saida de dados
  printf("\n A media eh: %.2f", soma/15);
  
  return 0;
}