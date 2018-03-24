#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vendedor;
    float importe;
    int respuesta;
    int importeTotal;
    int i= 0;
    float ganancia;

    do{
        printf("Ingrese el importe\n");
        scanf("%f", &importe);
        printf("Ingrese el numero de vendedor\n");
        scanf("%d",&vendedor );
        printf("Desea continuar?\n");
        scanf("%d", &respuesta);
        i++;

    }while(respuesta !=0);



    return 0;
}
