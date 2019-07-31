#include <stdio.h>
#define SIZE 8
int main()
{
	int i;

	printf("Introduce un valor entre 1 y 2\n");
	scanf("%d",&i);

     
     switch (i)
     {
        case 1:
			printf("Escogiste mostrar los números de base 10\n");
			//Declara las variables
			int num, rem, reverse_num, temp, start, end;

			//Solicita el valor inicial, también puede ser un número estático

			printf("Numero inicial: ");
			scanf("%d",&start);

			//Solicita el valor final, de igual manera puede ser un número estático

			printf("Numero final: ");
			scanf("%d",&end);

			//Imprime los núemros palíndromos entre el valor inicial y el valor final

			printf("\n\nLos números palindromos entre %d y %d son: \n\n",start,end);

			for(num=start;num<=end;num++){
				temp=num;
				reverse_num=0;

				while(temp){
					rem=temp%10;
					temp=temp/10;
					reverse_num=reverse_num*10+rem;
				}

				if(num==reverse_num)
				printf("%d ",num);
			}
			printf("\n ---------------------------------------------------------------- \n ");
			printf("\n Ese ha sido el total de números palindromos en base 10 \n ");
			printf("\n ---------------------------------------------------------------- \n ");
			return 0;

			break;

		case 2:
             printf("Escogiste mostrar los números de base 2\n");

             unsigned int n;
			printf("Ingresa el número a consultar( max range 255)\n");
			scanf("%d",&n);
			int c[SIZE]={0};
			int i=SIZE-1;
			printf("El numero convertido en binario es: ");
			while(n!=0){
				c[i--]=n&1;
				n=n>>1;
			}

		    for(int j=0;j<SIZE;j++)
		    printf("%d",c[j]);
		    printf("\n");
    
		    for(int j=0,k=SIZE-1;j<k;j++,k--){
		        if(c[j]!=c[k]){
		            printf("Lo sentimos, no es un palindromo\n");
		            return 0;
		        }
		    }
		    
		    printf("Genial, el numero es un palindromo\n");

			break;
		default:
			printf("Error, la opción no está disponible\n ");
	}
    return 0;
}


//Explicación del binario

//Se ingresa el número 24

//1. Lo que se hace es convertir el número a binario
//Por lo tanto, N = 24
//Se declara un arreglo de 8 posiciones con valores de 0
// 000 00 000

//Se resta 1 al valor total del arreglo tras cada iteacción
//Hasta quedar con el valor de 000 11 000

//Ahora se chequea que sea palíndromo. Para hacerlo se toma el último número y se le resta el primero. 
//Por ejemplo 8 - 1. Que sería igual a 7 - 0
