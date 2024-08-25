#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){

    if (argc != 2)
    {
        printf("uso ./nombre nombre\n");
        return 1;
    }
   // printf("Se pasaron %i argumentos \n", argc);
    string nombre = argv[1];
    printf("hola %s \n", nombre);
}
