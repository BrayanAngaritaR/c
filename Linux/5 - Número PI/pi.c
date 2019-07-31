/*
Edited by: Brayan Angarita

5. Calcular PI
*/

/*
Edited by: Brayan Angarita

5. Calcular PI
*/

#include "gmp.h"
#include<stdio.h>
#include <stdlib.h>

int main()
{
  int i, j = 0;
  double pi = 0;

  for (i = 1; i < 1000001; i += 2){
  if(i == 1 || j == 4){
    pi = pi + (4/(double)i);
    j = 2;
  } else {
    pi = pi - (4/(double)i);
    j = j + 2;
  }
  }

  printf("Valor de Pi: %.45f\n", pi);
  //getch(); //Pause
  return 0;
}


