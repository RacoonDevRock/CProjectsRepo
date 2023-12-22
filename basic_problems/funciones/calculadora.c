// CALCULADORA BASICA DE 4 OPERACIONES + - * /
#include <stdio.h>
float calculadora(int num1, int num2, char opc);

int main() {
    char opc;
    int num1, num2, resultado;

    printf("Ingrese la operacion a realizar (simbolo): ");
    scanf("%c",&opc);

    printf("Ingrese primer numero: ");
    scanf("%d",&num1);

    printf("Ingrese segundo numero: ");
    scanf("%d",&num2);

    printf("%d %c %d = %.1f",num1,opc,num2,calculadora(num1,num2,opc));

    return 0;
}

float calculadora(int num1, int num2, char opc) {
    float calculo;
    switch (opc)
    {
    case '+':
        calculo = num1 + num2;
        break;
    case '-':
        calculo = num1 - num2;
        break;
    case '*':
        calculo = num1 * num2;
        break;
    case '/':
        calculo = num1 / num2;
        break;
    }
    return calculo;
}








// #include <stdio.h>
// int suma(int num1,int num2);
// int resta(int num1,int num2);
// int multiplicacion(int num1,int num2);
// int division(int num1,int num2);


// int main() {
//     int num1, num2, resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision;
//     printf("Ingrese primer numero: ");
//     scanf("%d",&num1);

//     printf("Ingrese segundo numero: ");
//     scanf("%d",&num2);

//     resultadoSuma = suma(num1,num2);
//     resultadoResta = resta(num1,num2);
//     resultadoMultiplicacion = multiplicacion(num1,num2);
//     resultadoDivision = division(num1,num2);

//     printf("%d + %d = %d",num1,num2,resultadoSuma);
//     printf("\n%d - %d = %d",num1,num2,resultadoResta);
//     printf("\n%d x %d = %d",num1,num2,resultadoMultiplicacion);
//     printf("\n%d / %d = %d",num1,num2,resultadoDivision);

    
//     return 0;
// }


// int suma(int num1,int num2) {
//     return num1 + num2;
// }

// int resta(int num1,int num2) {
//     return num1 - num2;
// }

// int multiplicacion(int num1,int num2) {
//     return num1 * num2;
// }

// int division(int num1,int num2) {
//     return num1 / num2;
// }