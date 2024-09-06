#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de un nodo en la lista enlazada
typedef struct nodo
{
    int valor;
    struct nodo *siguiente;
} nodo;

// funcion principal
int main(void){

    nodo *cabeza = NULL;
    nodo *nuevoNodo = malloc(sizeof(nodo));

    if(nuevoNodo == NULL){
        printf("No se pudo!");
        return 1;
    }

    nuevoNodo->valor = 10;
    nuevoNodo->siguiente = NULL;
    cabeza = nuevoNodo;

    nodo *NuevoNodo2 = malloc(sizeof(nodo));
    if(NuevoNodo2 == NULL){
        printf("No se pudo!");
        return 1;
    }

    NuevoNodo2->valor = 20;
    NuevoNodo2->siguiente = NULL;
    nuevoNodo->siguiente = NuevoNodo2;

    nodo *nuevoNodo3 = malloc(sizeof(nodo));
    if(nuevoNodo3 == NULL)
    {
        return 1;
    }

    nuevoNodo3->valor = 30;
    nuevoNodo3->siguiente = NULL;
    NuevoNodo2->siguiente = nuevoNodo3;

    nodo *temp = cabeza;
    int n = 0;
    while(temp != NULL)
    {
        printf("cajita en posicion %d tiene valor %d\n", n, temp->valor);
        n++;
        temp = temp->siguiente;
    }

    free(nuevoNodo);
    free(NuevoNodo2);
    free(nuevoNodo3);
    return 0;

}
