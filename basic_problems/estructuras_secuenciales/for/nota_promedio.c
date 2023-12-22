// CALCULE EL PROMEDIO DE LA NOTA DE 10 ESTUDIANTES EN UN EXAMEN FINAL
#include <stdio.h>

int main() {
    float nota, notaTotal = 0;
    int cantidadEstudiantes;

    printf("Ingrese la cantidad de estudiantes a promediar: ");
    scanf("%d",&cantidadEstudiantes);

    for (int i = 1; i <= cantidadEstudiantes; i++)
    {
        do
        {
            printf("Ingrese la nota de su estudiante '%d': ",i);
            scanf("%f",&nota);
        } while ((nota <= 0) || (nota >= 20));

        notaTotal += nota;
    }

    float promedio = notaTotal / cantidadEstudiantes;
    printf("La nota promedio de los 10 alumnos es: %.2f",promedio);
    

    return 0;
}