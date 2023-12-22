#include <stdio.h>

int main() {
    int numero, multiplicacion, multiplo;

    printf("Indique el numero que desea multiplicar: ");
    scanf("%d",&numero);

    printf("Indique la cantidad de numeros que desea multiplicar: ");
    scanf("%d",&multiplo);

    for (int i = 1; i <= multiplo; i++)
    {
        multiplicacion = i * numero;
        printf("%d X %d = %d\n",numero,i,multiplicacion);
    }
    

    return 0;
}