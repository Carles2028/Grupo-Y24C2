#include <stdio.h>
#include <cs50.h>

void recursiveFor(int initial, int base)
{
    if (initial >= base) {
        return;
    }
    recursiveFor(initial + 1, base);
    printf("#\n");
}

int main() {
    recursiveFor(0, 10);
}
