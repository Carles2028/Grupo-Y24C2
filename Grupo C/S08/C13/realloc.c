#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *array = malloc(2 * sizeof(int));
    for(int i = 0; i < 2; i++)
    {
        array[i] = get_int("Numeros: ");
    }
    for(int i = 0; i < 2; i++)
    {
        printf("numeros del malloc: %d\n", array[i]);
    }

    array = realloc(array, 5 * sizeof(int));

    for(int i = 2; i < 5; i++)
    {
        array[i] = get_int("Numeros: ");
    }
    for(int i = 0; i < 5; i++)
    {
        printf("numeros del realloc:%d\n", array[i]);
    }
    free(array);
    return 0;
}
