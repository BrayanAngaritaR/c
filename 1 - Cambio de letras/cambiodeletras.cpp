/*
Author: Pankaj Prakash
Edited by: Brayan Angarita

1. Realice un programa en C que en el mismo archivo de texto realice los cambios de la letra
A por letra E y la letra a por letra i.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

/* First Function declaration */
void replaceA_for_E(char *str, const char *AWord, const char *EWord);
/* Second Function declaration */
void replace_a_for_i(char *str, const char *aWord, const char *iWord);


int main()
{
    /* File pointer to hold reference of input file */
    FILE * fPtr;
    FILE * fTemp;
    char path[100];

    char buffer[BUFFER_SIZE];
    char AWord[10]= "A", EWord[10]= "E";
    char aWord[10]= "a", iWord[10]= "i";


    printf("Ingresa la ruta donde esta el archivo: ");
    scanf("%s", path);

    // In case you want to make the letter dynamic only the value is removed
    // that has AWord and EWord and uncomments the following code

    //printf("Ingresa la palabra que quieres reemplazar: ");
    //scanf("%s", AWord);

    //printf("Bien, vas a reemplazar '%s' por: ");
    //scanf("%s", EWord);


    /*  Open all required files */
    fPtr  = fopen(path, "r");
    fTemp = fopen("replace.tmp", "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL || fTemp == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nError, no se ha podido abrir el archivo.\n");
        printf("Verifica que el archivo existe y que tienes permisos de lectura/escritura.\n");
        exit(EXIT_SUCCESS);
    }


    /*
     * Read line from source file and write to destination
     * file after replacing given word.
     */
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        // Replace all occurrence of word from current line
        replaceA_for_E(buffer, AWord, EWord);

        //Delete this if you want to make the dynamic letter
        replace_a_for_i(buffer, aWord, iWord);

        // After replacing write it to temp file.
        fputs(buffer, fTemp);
    }

    /* Close all files to release resource */
    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove(path);

    /* Rename temp file as original file */
    rename("replace.tmp", path);

    printf("\nSe han reemplazado todas las letras '%s' por '%s'.", AWord, EWord);
    printf("\nAl mismo tiempo se han reemplazado todas las letras '%s' por '%s'.", aWord, iWord);
    system("pause");
    return 0;
}



/**
 * Replace all occurrences of a given a word in string.
 */
void replaceA_for_E(char *str, const char *AWord, const char *EWord)
{
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int owlen;

    owlen = strlen(AWord);


    /*
     * Repeat till all occurrences are replaced.
     */
    while ((pos = strstr(str, AWord)) != NULL)
    {
        // Bakup current line
        strcpy(temp, str);

        // Index of current found word
        index = pos - str;

        // Terminate str after word found index
        str[index] = '\0';

        // Concatenate str with new word
        strcat(str, EWord);

        // Concatenate str with remaining words after
        // AWord found index.
        strcat(str, temp + index + owlen);
    }


    system("pause");
//return 0;
}

/**
 * Replace all occurrences of a given a word in string.
 */
void replace_a_for_i(char *str, const char *aWord, const char *iWord)
{
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int owlen;

    owlen = strlen(aWord);


    /*
     * Repeat till all occurrences are replaced.
     */
    while ((pos = strstr(str, aWord)) != NULL)
    {
        // Bakup current line
        strcpy(temp, str);

        // Index of current found word
        index = pos - str;

        // Terminate str after word found index
        str[index] = '\0';

        // Concatenate str with new word
        strcat(str, iWord);

        // Concatenate str with remaining words after
        // AWord found index.
        strcat(str, temp + index + owlen);
    }


    system("pause");
//return 0;
}
