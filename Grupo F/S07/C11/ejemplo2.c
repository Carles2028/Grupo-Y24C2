#include<cs50.h>
#include<stdio.h>

int main()
{
    int n = 50;
    //con el & le accedemos el contenido de puntero y le asignamos 50
    int *s = &n;
    printf("el valor de n es: %d\n", n);
    printf(" el valor del contenido del puntero es: %d\n", *s);
    printf("La direccion el puntero s es: %p\n", s);
    printf("la direccion del puntero n es: %p\n", &n);

    return 0;
}
