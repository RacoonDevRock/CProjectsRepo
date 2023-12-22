// CALCULE EL DINERO INGRESADO DE LA VENTA TOTAL DEL DIA
#include <stdio.h>

int main() {
    float ventaTotal = 0, ganancia;
    int contador = 0, cantidadDeIngresos;

    printf("Ingrese cantidad de ganancias: ");
    scanf("%d",&cantidadDeIngresos);
    
    do
    {
        printf("Ingrese ganancia: ");
        scanf("%f",&ganancia);

        ventaTotal += ganancia;

        contador++;
    } while (cantidadDeIngresos != contador);
    
    printf("Su venta total del dia ha sido: %f",ventaTotal);  

    return 0;
}