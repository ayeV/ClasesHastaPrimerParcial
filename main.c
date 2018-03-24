#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vendedor;

    int importe;
    char respuesta;
    int vendedor1, vendedor2, vendedor3;
    int i= 0;

    //float ganancia1, ganancia2, ganancia3;

    do{
        printf("Ingrese el importe\n");
        scanf("%d", &importe);
        printf("Ingrese el numero de vendedor\n");
        fflush(stdin);
        scanf("%d",&vendedor);

        switch(vendedor){
            case 1:
                vendedor1= vendedor1 + importe;



                break;
            case 2:
                vendedor2 = vendedor2 + importe;



                break;
            case 3:

               vendedor3 = vendedor3 + importe;




               break;
        }

        printf("Desea continuar?\n");
        fflush(stdin);
        scanf("%c", &respuesta);
        i++;

    }while(respuesta == 's');

    /*ganancia1 = (float)(5*vendedor1)/100;
    ganancia2 = (float)(5*vendedor2)/100;
    ganancia3 = (float)(5*vendedor3)/100;*/


    printf("Vendedor 1 gano: $%d\n", vendedor1);
    printf("Vendedor 2 gano: $%d\n", vendedor2);
    printf("Vendedor 3 gano: $%d", vendedor3);

    return 0;
}
