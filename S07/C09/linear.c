#include <cs50.h>
#include <stdio.h>

int busqueda_lineal(int arr[], int limite, int objetivo) {
    for (int i = 0; i < limite; i++) {
        if (arr[i] == objetivo) {
            return i;
            break;
        }
    }
    return -1;
}

int main() {
    int lista[] = {1, 2, 5, 6, 8, 10, 15, 20, 40, 60};
    int numeroBuscar = get_int("Ingrese el número que desea buscar: ");
    int resultado = busqueda_lineal(lista, 10, numeroBuscar);
    if (resultado != -1) {
        printf("%i encontrado en el indice %i\n", numeroBuscar, resultado);
        return 0;
    }
    printf("No encontrado. \n");
    return 0;
}
