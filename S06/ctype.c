#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int contador = 0;
    string name = get_string("Name: ");
    for(int i = 0; i < strlen(name); i++)
    {
        if(islower(name[i]))
        {
            contador++;
        }
    }
    printf("La palabra %s tiene %d minisculas\n", name, contador);
    return 0;
}
