// FUNCION QUE CALCULE EL AREA
#include <stdio.h>
int areaTriangulo(int base,int altura);

int main() {
    int area, area1, area2;

    area = areaTriangulo(4,7);
    area1 = areaTriangulo(5,10);
    area2 = areaTriangulo(10,20);

    printf("El area de su triangulo es: %d",area);
    printf("\nEl area de su triangulo es: %d",area1);
    printf("\nEl area de su triangulo es: %d",area2);

    return 0;
}

int areaTriangulo(int base,int altura) {
    int area;
    area = (base * altura) / 2;
    return area;
}