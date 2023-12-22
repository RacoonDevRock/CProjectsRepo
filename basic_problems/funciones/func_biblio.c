// FUNCIONES DE LIBRERIA
// <stdio.h>
//     -print()
//     -scanf()
//     -getchar()
//     -putchar()

// <math.h>
//     -sqrt(x)
//     -pow(x,y)
//     -sin(x)
//     -cos(x)

// <ctype.h>
//     -isdigit(c)
//     -isalpha(c)

#include <stdio.h>
#include <math.h>

int main() {
    double dato, resultado;
    printf("Ingrese numero: ");
    scanf("%lf",&dato);
    resultado = sin(dato);
    printf("El seno del dato es: %lf",resultado);
}