#include <stdio.h>  // IMC = PESO /(ALTURA^2)

int main() {
    float peso, altura, IMC;
    printf("Ingrese su peso: ");
    scanf("%f",&peso);

    printf("Ingrese su altura: ");
    scanf("%f",&altura);

    IMC = peso / (altura * altura);

    printf("Tu IMC es de: %.2f ",IMC);

    if (IMC < 18.5)
    {
        printf("(PESO POR DEBAJO DE LO NORMAL)");
    } else if ((IMC >= 18.5) && (IMC < 25))
    {
        printf("(PESO SALUDABLE)");
    } else if ((IMC >= 25) && (IMC < 30))
    {
        printf("(SOBREPESO)");
    } else if (IMC > 30)
    {
        printf("(OBESIDAD EXTREMA)");
    }
    
    return 0;
}