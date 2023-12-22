/*
JERARQUIA DE OPERADORES
()
!
++
--
* - / - %
+  -
== - != - < - > - <= - >=
&&(AND) - ||(OR)

*/

// CONDICIONALES
#include <stdio.h>

int main() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d",&edad);

    if (edad >= 18)
    {
        printf("Es MAYOR de edad");
    } else
    {
        printf("Es MENOR de edad");
    }

    return 0;
}