#include <stdio.h>

int main() {
    char letra;
    printf("Ingrese una leta: ");
    scanf("%c",&letra);

    switch (letra)
    {
    case 'a':
        printf("Es una VOCAL");
        break;

    case 'e':
        printf("Es una VOCAL");
        break;
        
    case 'i':
        printf("Es una VOCAL");
        break;
        
    case 'o':
        printf("Es una VOCAL");
        break;
        
    case 'u':
        printf("Es una VOCAL");
        break;
    
    default:
        printf("Es una CONSONANTE");
        break;
    }
    

    return 0;
}