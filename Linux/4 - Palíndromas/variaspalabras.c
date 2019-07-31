/*
Edited by: Brayan Angarita

4. Realice un programa en C que determine si dos palabras son palindromas
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char frase[1000];
    int i, j;
    int a=0;
    short largo;
    int palindromo = 1;
    printf("Escribe una frase o palabra: ");
    fflush(stdout);
     
    gets(frase);
    

//Se elimina el espacio para poder comparar
   largo= strlen(frase);

  while(frase[a]!= '\0')
  {
	 if(frase[a]==' ')
	{
	  for(i=a; i<largo; i++)
	   {
		frase[i]=frase[i+1];

	   }
	largo--;
	}
	a++;
  }
//////////////////////////
 
//Convertir todo a minusculas..
	for (int f = 0; frase[f] != '\0'; ++f){
		frase[f] = tolower(frase[f]);
	}

///
	j=strlen(frase)-1;
    for(i=0; i<strlen(frase)/2; i++, j--) {
        printf("Comprobando %c==%c\n", *(frase+i), *(frase+j));

         //SI alguna letra no es igual entonces se dice que no es palindroma
        if (*(frase+i)!=*(frase+j)) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo)
        printf("\nEs un palíndrimo.\n");
    else
        printf("\nNo es un palíndrimo.\n");
 
    return (0);
}

