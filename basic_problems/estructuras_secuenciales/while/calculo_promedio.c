#include <stdio.h>

int main() {
    int numeroDePruebas;
    float nota_total = 0.0;
    printf("Ingrese cantidad de notas a promediar: ");
    scanf("%d",&numeroDePruebas);

    for (int i = 1; i < numeroDePruebas+1; i++)
    {
        float nota = 0.0;
        printf("\nIngrese nota %d: ",i);
        scanf("%f",&nota);

        if ((nota >= 0 && (nota <= 20)))
        {
            nota_total += nota;
        } else
        {
            printf("NOTA NO VALIDA");
        }
        

    }

    float promedio = nota_total / numeroDePruebas;
    printf("\nSu promedio es: %f",promedio);  

    return 0;
}
