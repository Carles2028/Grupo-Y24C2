#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    printf("El primer valor es: %d\n", ptr[0]);

    // Liberar la memoria asignada
    free(ptr);
    return 0;
}
