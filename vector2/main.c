#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{   int legajo[CANT];
    float sueldo[CANT];
    int edad [CANT];
    int i;

    for(i = 0; i< CANT; i++){
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldo[i]);
        printf("Ingrese edad: ");
        scanf("%d", &edad[i]);
        legajo[i] = i+1;
    }
    for(i = 0; i<CANT; i++){
        printf("\nLegajo: %d", legajo[i]);
        printf("\nSueldo: $%.2f", sueldo[i]);
        printf("\nEdad: %d", edad[i]);
    }

    return 0;
}
