#include<cs50.h>
#include<stdio.h>

int main()
{
    /*Al momento de pedir las notas, la cantidad que se ingresa es el numero al cuadrado,
    debido a que la matriz es n * n...  ejemplo, 3 * 3, 4 * 4, (esto es solo un ejemplo)*/
    int n = get_int("Ingrese la cantidad de notas: ");
    int numeros[n][n];

    for(int i = 0; i < n; i++) // la variable "i" controla las filas en la matriz
    {
        for(int j = 0; j < n; j++) // la variable "j" controla las columnas en la matriz
        {
            numeros[i][j] = get_int("Ingrese la nota numero en los indice [%d][%d]: ", i, j);
        }

    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("El numero en la posicion [%d][%d] es: %d \n",i ,j, numeros[i][j]);
        }
    }

    return 0;

}
