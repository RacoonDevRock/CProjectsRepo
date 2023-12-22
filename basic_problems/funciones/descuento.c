// CALCULE DESCUENTO
#include <stdio.h>
float calculoDescuento(float montoCompra, int descuento);

int main() {
    float montoCompra, total;
    int descuento;

    printf("Ingrese el valor de su compra: ");
    scanf("%f",&montoCompra);

    printf("Ingrese el valor del descuento a aplicar: ");
    scanf("%d",&descuento);

    total = calculoDescuento(montoCompra,descuento);

    printf("Un descuento de %d, a su compra de %.2f es de: %.2f",descuento,montoCompra,total);

    return 0;
}

float calculoDescuento(float montoCompra, int descuento) {
    float total;
    total = montoCompra - (descuento * montoCompra) / 100;
    return total;
}
