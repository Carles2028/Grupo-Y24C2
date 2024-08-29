#include<cs50.h>
#include<stdio.h>

int main()
{
    FILE *file = fopen("oracion.txt", "r");
    FILE *salida = fopen("salida.txt", "w");
    char caracteres[100];
    //fegtc
    while(fscanf(file, "%s", caracteres) != EOF)
    {
        fprintf(salida, "%s\n", caracteres);
    }
    fclose(file);
    fclose(salida);
    return 0;
}
