#include <stdio.h>
int anioBisiesto(int anio);

int main() {
    int anio, continuar, resultado;

    do
    {
        printf("Ingrese el anio: ");
        scanf("%d",&anio);
        if (anio >= 1000 && anio <= 9999)
        {
            continuar = 1;
        }
        
    } while (continuar == 0);

    resultado = anioBisiesto(anio);

    if (resultado == 1)
    {
        printf("El anio %d es BISIESTO",anio);
    } else
    {
        printf("El anio %d NO es bisiesto",anio);
    }
    
    
    
    return 0;
}
int anioBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
    {
        return 1;
    } else
    {
        return 0;
    }    
}
