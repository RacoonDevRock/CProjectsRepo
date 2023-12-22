// CALCULADORA DE INTERES COMPUESTO
#include <stdio.h>

int main() {
    double dineroActual, adicionAnual, interesAnual = 0;
    int anios = 0;

    printf("Ingrese el dinero actual de su inventario: ");
    scanf("%lf",&dineroActual);

    printf("Ingrese el dinero que va a agregar anualmente: ");
    scanf("%lf",&adicionAnual);

    printf("Ingrese la cantidad de anios de inversión: ");
    scanf("%i",&anios);

    printf("Ingrese el porcentaje de interes anual: ");
    scanf("%lf",&interesAnual);

    double total = dineroActual;

    for (int i = 0; i < anios; i++)
    {
        total += 1000;
        total = total + (interesAnual * total / 100);
    }

    printf("En %i anios tendras: %lf",anios,total);
    

    return 0;
}