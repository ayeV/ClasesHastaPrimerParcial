#include <stdio.h>
#include <stdlib.h>
#define CANT 2
int main()
    //array de caracteres
{   int legajo[CANT], sueldo[CANT];
    char nombre[CANT][31];
    int i;
    for(i=0; i<CANT; i++) {

        legajo[i]=i+1;
        printf("Nombre: ");
        fflush(stdin);
        scanf("%[^\n]", nombre[i]);
        printf("Sueldo: ");
        scanf("%d", &sueldo[i]);
    }
    printf("\nLeg\tNombre\tSueldo");

    for(i= 0; i<CANT; i++){
            printf("\n%d\t%s\t%d", legajo[i], nombre[i], sueldo[i]);
    }

    return 0;
}
