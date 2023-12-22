// TODOS LOS NUMEROS PARES e IMPARES DEL 1 AL 100
#include <stdio.h>

int main() {

    printf("NUMEROS PARES DEL 1 AL 100");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d",i);
        }
        
    }

    printf("\nNUMEROS IMPARES DEL 1 AL 100");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("\n%d",i);
        }
        
    }

    return 0;
}