#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");
    if (!file)
        return 1;
    FILE *salida = fopen(argv[2], "w");
    if (!salida)
        return 2;
    BYTE *imagen = malloc(sizeof(BYTE));
    while(fread(imagen, sizeof(BYTE), 1, file)) {
        fwrite(imagen, sizeof(BYTE), 1, salida);
    }
    fclose(file);
    fclose(salida);
    free(imagen);
}
