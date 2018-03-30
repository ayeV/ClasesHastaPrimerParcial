#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x, y;
    float respuesta;
    float respuesta1, respuesta2, respuesta3, respuesta4, respuesta5;
    int initVarX=0;
    int initVarY=0;

    while(seguir=='s')
    {   system("cls");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Primer operando: ");
                scanf("%f", &x);
                initVarX = 1;

                system("pause");
                break;
            case 2:
                printf("Segundo operando: ");
                scanf("%f", &y);
                 initVarY = 1;

                system("pause");
                break;
            case 3:
                respuesta = sumar(x,y);
                printf("La suma de %.2f + %.2f es: %.2f\n", x, y,respuesta);
                system("pause");
                break;
            case 4:
                respuesta = restar(x,y);
                printf("La resta de %.2f - %.2f es: %.2f\n", x, y, respuesta);
                system("pause");
                break;
            case 5:
                if(y == 0){
                    printf("Error\n");
                    system("pause");
                }
                else{

                respuesta = division(x,y);

                printf("La division entre %.2f y %.2f es: %.2f\n", x, y, respuesta);

                system("pause");
                }
                break;
            case 6:
                respuesta = multiplicacion(x,y);
                printf("La multiplicacion entre %.2f y %.2f es: %.2f\n",x, y, respuesta);
                system("pause");
                break;
            case 7: // hacer que el usuario no ingrese numeros con coma

                if ( (x != (int)x) == 1){
                    printf ("Error, debe ingresar nro entero!\n");
                    system("pause");
                }
                else
                {
                    respuesta = factorial(x);

                    printf("El factorial de %d es: %d\n",(int)x,(int)respuesta);
                    system("pause");
                }

                break;
            case 8:
                respuesta1 = sumar(x,y);
                respuesta2 = restar(x,y);
                respuesta3 = division(x,y);
                respuesta4 = multiplicacion(x,y);
                respuesta5 = factorial(x);
                printf("La suma de %.2f + %.2f es: %.2f\n", x, y,respuesta1);
                printf("La resta de %.2f - %.2f es: %.2f\n", x, y, respuesta2);
                if(y==0){
                    printf("Error\n");
                    system("pause");
                }
                else{
                printf("La division entre %.2f y %.2f es: %.2f\n", x, y, respuesta3);


                }
                printf("La multiplicacion entre %.2f y %.2f es: %.2f\n",x, y, respuesta4);
                printf("El factorial de %d es: %d\n",(int)x,(int)respuesta5); //hace solo el factorial del primer operando

                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
