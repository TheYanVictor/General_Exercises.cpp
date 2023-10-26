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
  
  return 0;
}