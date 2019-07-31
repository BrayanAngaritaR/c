#include <stdio.h>
//Realice  un  programa  que  determine  en  un  archivo  de  texto  el  número  de  palabras  que
//inician por la letra a. Se entiende por palabra una secuencia de tres o más letras.
//

int contarAinFile(FILE *fp);


int main(){


	FILE *f;
	int solucion;
	f = fopen("file.txt","r+");

	solucion = contarAinFile(f);
	
	printf("El numero de palabras que inician con 'a' son: [%i]\n",solucion);
	fclose(f);
	return 0;
}
/*cuenta el numero de palabras que inician con la letra a.(Se entiende por palabras a una secuencia de 3 o mas letras) */
int contarAinFile(FILE *fp){

	int i=0,n;
	char c,d;
	FILE *fn;
	n = 0;

	while(!feof(fp)){
		i = 1;
		//if((c=getc(fp)) == 'A')
		if((c=getc(fp)) == 'a'){
			while((d=getc(fp)) != ' ' && d !=EOF){
			//	printf("%c",d);	
				i++;
			}
			if(i > 2){
				n++;
			}
		//	printf("\n");

		}else{
			while((d=getc(fp)) !=' ' && d !=EOF){
					
			}
		}

	}	
	return n;
}
