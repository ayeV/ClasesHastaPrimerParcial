#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;



} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;



} eEmpleado;

int menu();
void inicializarEmpleados(eEmpleado vec[], int tam);
int buscarLibre(eEmpleado vec[], int tam);
void altaEmpleado(eEmpleado vec[], int tam);
void mostrarEmpleados(eEmpleado vec[], int tam);
void mostrarEmpleado(eEmpleado vec[]);
int buscarEmpleado(eEmpleado vec[],int tam, int legajo);





int main()
{
    eEmpleado gente[50];
    int salir = 0;

    inicializarEmpleados(gente, 50);
    do
    {

        switch(menu())
        {
        case 1:
            altaEmpleado(gente,50);
            system("pause");
            break;
        case 2:
            printf("Baja\n");
            system("pause");
            break;
        case 3:
            printf("Modificar\n");
            system("pause");
            break;
        case 4:
            printf("Listar\n");
            system("pause");
            break;
        case 5:
            printf("Ordenar\n");
            system("pause");
            break;
        case 6:
            printf("Salir\n");
            salir = 1;
            break;
        default:
            printf("Opcion incorrecta\n");
            system("pause");
        }



    }
    while(salir != 1);




    return 0;
}

int menu()
{
    int opcion;
    system("cls");

    printf("1.Alta\n");
    printf("2.Baja\n");
    printf("3.Modificacion\n");

    printf("4.Listar\n");
    printf("5.Ordenar\n");
    printf("6.Salir\n");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarEmpleados(eEmpleado vec[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        vec[i].isEmpty = 1;

    }
}

int buscarLibre(eEmpleado vec[], int tam)
{
    int i;
    int indice = -1;

    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

void altaEmpleado(eEmpleado vec[], int tam)
{
     eEmpleado nuevoEmpleado;
    int esta;
    int legajo;
    int indice;

    system("cls");
    indice = buscarLibre(vec,tam);


    if(indice == -1)
    {
        printf("El sistema no admite mas empleados\n");
    }
    else
    {
        printf("Legajo: ");
        scanf("%d",&legajo);

        esta = buscarEmpleado(vec,tam,legajo);
        if(esta !=1 ){
            printf("\nEl legajo %d ya esta dado de alta\n", legajo);
            mostrarEmpleado(vec[esta]);
        }
        else{
        nuevoEmpleado.isEmpty = 0;
        nuevoEmpleado.legajo =legajo;
        printf("Nombre: ");
        fflush(stdin);
        scanf("%[^\n]",nuevoEmpleado.nombre);
        printf("\n\nFecha de nacimiento");
        printf("\nDia: ");
        scanf("%d", &nuevoEmpleado.fechaIngreso.dia);

        printf("\nMes: ");
        scanf("%d", &nuevoEmpleado.fechaIngreso.mes);

        printf("\nAño: ");
        scanf("%d", &nuevoEmpleado.fechaIngreso.anio);

        printf("Sexo: ");
        fflush(stdin);
        scanf("%c",&nuevoEmpleado.sexo);
        printf("Sueldo: ");
        scanf("%f",&nuevoEmpleado.sueldo);
        vec[indice] = nuevoEmpleado;
        printf("Alta exitosa\n");
        }
        }
    }











void mostrarEmpleados(eEmpleado vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            mostrarEmpleado(vec[i]);
        }

    }
}



void mostrarEmpleado(eEmpleado vec[])
{   int i;
    printf("Legajo\t\tNombret\tFecha Ingreso\t\tSueldo\t\tSexo\n\n");
    printf("%d\t%s\t\t\t%d/%d/%d\t%.2f\t\t%c\n", vec[i].legajo, vec[i].nombre, vec[i].fechaIngreso.dia, vec[i].fechaIngreso.mes, vec[i].fechaIngreso.anio, vec[i].sueldo, vec[i].sexo);

}

int buscarEmpleado(eEmpleado vec[],int tam, int legajo)
{
    int i;
    int indice = -1;
    for(i=0; i<tam; i++)
    {
        if(legajo == vec[i].legajo)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
void ordenarEmpleados(eEmpleado vec[],int tam){
    int i,j;
    for(i=0;i<tam-1;i++){
        for(j=i+1;j<tam;j++){

        }
    }


}

void baja(eEmpleado vec[], int tam){
    int legajo;
    char opc;
    int esta;


    printf("Legajo: ");
    scanf("%d", &legajo);
    esta = buscarEmpleado(vec, tam, legajo);
    if(indice == -1){
        printf("Legajo inexistente");
    }
    else{
        mostrarEmpleado(vec[esta]);
        printf("Confirma la baja? S/N\n");
        fflush(stdin);
        scanf("%c", &opc);
        if(opc == 's'){
            vec[]
        }
    }

}



