#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero entre el 1 y el 7: ");
    scanf("%d",&numero);
    
    // ESTRUCTURA IF
    // if ((numero >= 1) && (numero <= 7)) {
    //     if (numero == 1) {
    //         printf("Lunes");
    //     }
    //     if (numero == 2) {
    //         printf("Martes");
    //     } 
    //     if (numero == 3) {
    //         printf("Miercoles");
    //     } 
    //     if (numero == 4) {
    //         printf("Jueves");
    //     } 
    //     if (numero == 5) {
    //         printf("Viernes");
    //     } 
    //     if (numero == 6) {
    //         printf("Sabado");
    //     } 
    //     if (numero == 7) {
    //         printf("Domingo");
    //     }
    // } else {
    //     printf("Ingrese un numero valido");
    // }

    // SWITCH-CASE
    switch (numero)
    {
    case 1:
        printf("Lunes");
        break;

    case 2:
        printf("Martes");
        break;
        
    case 3:
        printf("Miercoles");
        break;
        
    case 4:
        printf("Jueves");
        break;
        
    case 5:
        printf("Viernes");
        break;
        
    case 6:
        printf("Sabado");
        break;
        
    case 7:
        printf("Domingo");
        break;
    
    default:
        printf("Ingrese un numero valido");
        break;
    }
    
    return 0;
}