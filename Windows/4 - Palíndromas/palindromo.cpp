/*
Edited by: Brayan Angarita

4. Realice un programa en C que determine si dos palabras son palindromas
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char palabra[80];
	int x,y,z;
	
	printf("\n\Introduce una palabra: ");
	scanf(" %s",palabra);
	x=strlen(palabra);
	
	x=x-1;
	for(y=0,z=x;y<=x/2;y++,z--);
	
	if(palabra[y]==palabra[z])
		printf("Es palindromo");
	else
		printf("No es palindromo");
	getch();
}
