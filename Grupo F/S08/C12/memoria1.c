#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    printf("El primer valor es: %d\n", ptr[0]);

    // Error: No se libera la memoria asignada
    return 0;
}
