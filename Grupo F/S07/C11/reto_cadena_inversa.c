#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char *s = get_string("Ingrese una cadena: ");
    for(int i = strlen(s); i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
