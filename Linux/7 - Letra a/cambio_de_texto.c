#include <stdio.h>
    //Realizar  un  programa  que  determine  en  un  archivo  de  texto  el  número  de  palabras  que
    //inician por la letra a. Se entiende por palabra una secuencia de tres o más letras.

    //Author: Brayan Angarita
    //

    int contarAinFile(FILE *fp);


    int main(){


	    FILE *f;//Crea un apuntador del tipo FILE *


        //Define las variables
        char ch; 
        int wrd=1,charctr=1;


	    int cantidad_palabras;

        char fname[20];
	    printf("Ingresa el nombre del archivo: ");
	    scanf("%s",fname); 
        
        //Filename: una cadena que contiene un nombre de fichero válido. opentype: especifica el tipo de fichero que se abrirá o se creará.

        /*
        "r" : abrir un archivo para lectura, el fichero debe existir.
        "w" : abrir un archivo para escritura, se crea si no existe o se sobreescribe si existe.
        "a" : abrir un archivo para escritura al final del contenido, si no existe se crea.
        "r+" : abrir un archivo para lectura y escritura, el fichero debe existir.
        "w+" : crear un archivo para lectura y escritura, se crea si no existe o se sobreescribe si existe.
        "r+b ó rb+" : Abre un archivo en modo binario para actualización (lectura y escritura).
        "rb" : Abre un archivo en modo binario para lectura.
        */

	    f = fopen(fname,"r");

        if(f==NULL) 
        { 
            printf("\n Lo sentimos, el archivo no existe o no puede ser abierto \n"); 
        } 

        else{

            int getKey;

	        printf("Presiona 1 para contar las palabras que inician por 'a'\n");
            printf("Presiona 2 para ver el contenido del archivo\n");
	        scanf("%d",&getKey);

            switch (getKey)
            {
                case 1:
                cantidad_palabras = contarAinFile(f);

                printf("\n"); 

                printf("El numero de palabras que inician con 'a' son: [%i]\n",cantidad_palabras);
                return 0;
                break;

                case 2:

                printf("\n---------------Información del archivo-------------------\n\n"); 

                ch=fgetc(f); 
                printf(" El archivo '%s' tiene el siguiente texto: \n\n",fname); 
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
                    ch=fgetc(f); 
                }
            
                printf("\n La cantidad de palabras dentro del archivo '%s' son: %d\n",fname,wrd-2); 
                printf(" La cantidad de letras dentro del archivo '%s' son: %d\n\n",fname,charctr-1);

                printf("\n---------------Fin de la información del archivo-------------------\n\n"); 

                fclose(f); //Esta función sirve para poder cerrar un fichero que se ha abierto.
                return 0;
                break;
		        default:
			    printf("Error, la opción no está disponible\n ");
            }
            return 0;      
        }
    }

    int contarAinFile(FILE *fp){

	    int i=0,n;
	    char c,d;
	    FILE *fn;
	    n = 0;

	    while(!feof(fp)){ //Mientras no haya llegado al final del archivo (EOF) ...
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
