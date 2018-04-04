#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{   int vector[CANT];
    int i;

    for(i=0; i<CANT; i++){
        printf("Ingrese: ");
        scanf("%d", &vector[i]);
    }
    for(i= 0; i<CANT; i++){
            printf("\n%d", vector[i]);

    }
    return 0;
}
