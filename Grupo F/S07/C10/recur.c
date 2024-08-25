#include<cs50.h>
#include<stdio.h>
#include<string.h>

void inversa(string cadena, int comienzo);

int main()
{
    string cadena = get_string("Ingresa algo: \n");
    int comienzo = 0;
    inversa(cadena, comienzo);
    return 0;
}
//            2
void inversa(string cadena, int comienzo)
{
    // 2
   if (strlen(cadena) == comienzo)
    {
       return;
   }
   inversa(cadena, comienzo + 1);
    printf("%c", cadena[comienzo]);
    if(comienzo == 0)
    {
        printf("\n");
    }

}


// #



