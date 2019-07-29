/*
Edited by: Brayan Angarita

3. Realice un programa en C que permita obtener un número específico de números
perfectos.
*/



#include <stdio.h>
#include <conio.h>

int main()
{
    int num1=0,num2=0,num3,cantd,perfectos=0,suma=0;
    char opcion;

    printf("\tNumeros perfectos\n");
    REGRESAR:
    printf("Ingresa la cantidad de numeros perfectos que deseas obtener: ");
    scanf("%d",&cantd);
    while (cantd>=5)
    {
     printf("Cuando quieres obtener una cifra superior a 5, el programa tardara mas,\n");
     printf("¿Deseas continuar? <S/N>\n");
     opcion=getch();
     if (opcion =='s' || opcion =='S')
     goto INICIO;
     else
     goto REGRESAR;
    }
    INICIO:
    printf("Numeros perfectos: ");

    for(num1=1; perfectos<cantd; num1++)
    {
     suma=0;
     for (num2=1; num2<num1;num2++)
       {
         num3=0;
         do {num3+=num2;}
         while (num3<num1);
         /*si esta expresion es valida entonces num2 es un divisor y
         lo sumamos al total para calcular si la suma de sus divisores es igual que num1*/
         if (num3==num1)
         suma+=num2;
       }
/*buscamos si es perfecto o no :)*/
     if (suma==num1){
     printf("%d ", num2);
     perfectos++;}

    }
    printf("%c",2);getch();

}
