#include <stdio.h>

int main() {
    int number;
    printf("Ingrese un numero: ");
    scanf("%d",&number);

    if ((number % 2) == 0)
    {
        printf("El numero es PAR");
    } else
    {
        printf("El numero es IMPAR");
    }

    return 0;
}