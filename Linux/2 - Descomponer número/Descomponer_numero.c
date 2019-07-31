/*
Edited by: Brayan Angarita

2. Realice un programa en C que permita obtener los factores primos de cualquier n�mero.
*/


#include <stdio.h>
#include <stdlib.h>


int numero; //Se declara la variable del n�mero que vamos a examinar.
int factores[1000]; //Este ser� un arreglo para almacenar los factores de "numero".
int i_factores=0; //Indice para recorrer el arreglo "factores[]".


int main()
{
	printf("Por favor digita el numero que quieres descomponer: ");
	scanf("%d", &numero);
	int i=2; //Empezaremos a verificar todos los factores desde 2 dado que el numero 1 es factor de todos los numeros.

	while(i<=numero)
	{
		if((numero%i)==0)  //a%b=0, implica que b es factor de a.
		{
			factores[i_factores]=i;  //A�adimos el factor al arreglo.
			numero=numero/i;         //Procesamos la variable "numero".
			i_factores++;            //Incrementamos indice de arreglo para el siguiente numero.
			continue;
		}
		i++;  //Incrementamos indice.
	}

	/* Rutina para imprimir */
	i=0;
printf("El numero descompuesto es: ");
  while(i<i_factores)
  {
  printf(" %d ", factores[i]);
  i++;
  }
//system("pause");
return 0;
}

