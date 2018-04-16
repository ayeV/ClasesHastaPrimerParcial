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

int main()
{
    eEmpleado unEmpleado = {"Juan", 1111, 1000.54, 'm'};
    eEmpleado otroEmpleado;
    otroEmpleado = unEmpleado; //se copia lo de unEmp a otroEmp
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


    mostrarEmpleado(otroEmpleado);
    return 0;
}

void mostrarEmpleado(eEmpleado emp){
    printf("Nombre: %s\n", emp.nombre);
    printf("Legajo: %d\n", emp.leg);
    printf("Sueldo: $%.2f\n", emp.sueldo);
    printf("Sexo: %c\n", emp.sexo);


}
