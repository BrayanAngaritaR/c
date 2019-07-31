#include <stdio.h>
#include <stdlib.h>

void main() 
{ 
    FILE *fptr; 
    char ch; 
    int wrd=1,charctr=1;
    char fname[20];
    printf("\n\n Contaremos la cantidad de palabras que hay en un archivo :\n");
	printf("---------------------------------------------------------\n"); 
	printf("Ingresa el nombre del archivo: ");
	scanf("%s",fname);    

    fptr=fopen(fname,"r"); 
    if(fptr==NULL) 
     { 
         printf("Lo sentimos, el archivo no existe o no puede ser abierto"); 
      } 
    else 
        { 
          ch=fgetc(fptr); 
          printf(" El archivo tiene el siguiente texto %s: \n\n",fname); 
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                if(ch==' '||ch=='\n')
                    { 
                        wrd++; 
                    }
                    else
                    {
                        charctr++; 
                    }
                ch=fgetc(fptr); 
            }
        printf("\n La cantidad de palabras dentro del archivo '%s' son: %d\n",fname,wrd-2); 
        printf(" La cantidad de letras dentro del archivo '%s' son: %d\n\n",fname,charctr-1);         
        } 
    fclose(fptr); 
}
