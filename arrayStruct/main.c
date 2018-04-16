#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    int leg;
    float sueldo;
    char sexo;


} eEmpleado;

void mostrarEmpleado(eEmpleado emp);
void mostrarEmpleados(eEmpleado vec[], int tam);

int main()
{
    eEmpleado plantel[] = {{"Juan", 1111, 1000.54, 'm'},{"Ana", 222, 20000, 'f'}, {"Luis", 333, 30000, 'm'}};


   //  eEmpleado unEmpleado;
    /*unEmpleado.leg = 1234;
    strcpy(unEmpleado.nombre, "Juan");
    unEmpleado.sueldo = 50000.50;
    unEmpleado.sexo = 'm';*/

 /*   printf("Ingrese nombre \n");
    gets(unEmpleado.nombre);
    printf("Legajo: \n");
    scanf("%d", &unEmpleado.leg);
    printf("Sueldo: \n");
    scanf("%f", &unEmpleado.sueldo);
    printf("Sexo: ");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);*/


    mostrarEmpleados(plantel,3);
    return 0;
}

void mostrarEmpleados(eEmpleado vec[], int tam){
    int i;

    for(i=0; i<tam; i++){
        mostrarEmpleado(vec[i]);
    }

}


void mostrarEmpleado(eEmpleado emp){
    printf("Nombre: %s\n", emp.nombre);
    printf("Legajo: %d\n", emp.leg);
    printf("Sueldo: $%.2f\n", emp.sueldo);
    printf("Sexo: %c\n", emp.sexo);


}
