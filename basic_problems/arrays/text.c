#include <stdio.h>
// #define NUM 6

int main() {
    char *frutas[5];
    frutas[0] = "Frutilla";
    frutas[1] = "Kiwi";
    frutas[2] = "Mango";
    frutas[3] = "Limon";
    frutas[4] = "Banana";

    for (int i = 0; i < 5; i++)
    {
        printf(frutas[i]);
    }
    

    // char nombre[NUM];
    // gets(nombre); // Almacenar los datos del arreglo
    // puts(nombre); // Mostrar los datos del arreglo

    return 0;
}