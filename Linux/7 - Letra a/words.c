#include<stdio.h>
#define FILE_READ "file.txt"

    int main()

{
    FILE * filp;
    int count = 1;
    char c;
    filp = fopen(FILE_READ, "r");
    if(filp == NULL)
        printf("El archivo no ha sido encontrado\n");
    while((c = fgetc(filp)) != EOF) {
        if(c == ' ')
            //printf("Hay un espacio");
            count++;
    }
    printf("La cantidad de palabras dentro del documento son %d\n", count);
    return 0;
}
