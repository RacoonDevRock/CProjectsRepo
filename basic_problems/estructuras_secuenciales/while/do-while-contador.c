#include <stdio.h>

int main() {
    int contador = 0;
    do
    {
        contador++;
        printf("\n%d",contador);
    } while (contador < 10);
    printf("\nSE TERMINO...");

    return 0;
}