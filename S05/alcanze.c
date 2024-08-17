#include<cs50.h>
#include<stdio.h>

int numero = 0; //variable de tipo global

/*La variable de tipo global se declara arriba del main, y se puede usar 
en cualquier funcion o parte del codigo */

int main()
{
    int numeros_dos = get_int("Ingrese un numero: ");
    int asignacion = 0;
    /*Variable de Local se puede usar dentro de la funcion creada
    sin importar donde este*/
    asignacion = (numeros_dos < 10) ? 1 : 2;

    for(int i = 0; i < 6; i++)
    {
        /*Variable de bloque, solo funciona dentro de las palabras reservada que lleven llave
        si se usa fuera del ciclo, el compilaodr no lo reconocera*/
        int j = get_int("Ingrese otro numero: ");
        asignacion += j;
    }

    return 0;
}