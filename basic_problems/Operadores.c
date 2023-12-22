// int number_one = 10;
// int number_two = 5;

// suma +
// number_one = number_one + 7;
// number_one += 7;

// resta - 
// number_one -= number_two; //5

// multiplicacioon *
// number_one *= number_two;

// division /
// number_one /= number_two;

// resto %
// number_one %= number_two;


// OPERADORES DE INCREMENTO Y DECREMENTO
// sumar un unico valor ---> ++
// #include <stdio.h>
// int main() {
//     int number = 4;
//     number++;  // number = number + 1;   number += 1;
//     printf("%d",number);
//     number--;  // number = number - 1;   number -= 1;
//     printf("\n%d",number);
//     // printf("%d",number);
//     int number_three = 6;
//     // number += number_three;
//     // printf("\n%d",number);
//     return 0;
// }


#include <stdio.h>

int main() {
    float primer_examen, segundo_examen, nota_final;

    printf("Ingrese la nota del primer examen: ");
    scanf("%f",&primer_examen);

    printf("Ingrese la nota del segundo examen: ");
    scanf("%f",&segundo_examen);

    nota_final = (primer_examen + segundo_examen) / 2;
    printf("Su nota final es: %.2f",nota_final);
    return 0;
}  