#include<cs50.h>
#include<stdio.h>

int main()
{
    int n = get_int("Ingrese la cantidad de notas: ")
    int numeros[n];

    for(int i = 0; i < n; i++)
    {
        numeros[i] = get_int("Ingrese la nota numero %d: ", i + 1);
    }

    for(int i = 0; i < n; i++)
    {
        printf("numeros del arreglos: %d", numeros[i]);
    }

    return 0;

}