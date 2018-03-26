#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    int acumuladorNotas = 0;
    int nota;
    char sexo;
    int edad;
    float promedio;
    int notaBaja;
    char sexoBajo;
    int contVaronesMas18 = 0;
    int minEdad;
    char minSexo;
    int minNota;
    int flag = 0;
    int notaMujer;
    int edadMujer;
    int contMujer = 0;

    for(i = 0; i<4; i++){
        printf("Ingrese la nota: ");
        scanf("%d", &nota);
        while(!(nota >=0 && nota <=10)){
            printf("\nError, reingrese nota: ");
            scanf("%d", &nota);

        }
        acumuladorNotas = acumuladorNotas + nota;
        printf("\nIngrese sexo: ");
        fflush(stdin);
        scanf("%c", &sexo);
        while(sexo != 'm' && sexo != 'f'){
            printf("\nReingrese sexo: ");
            fflush(stdin);
            scanf("%c", &sexo);
            }

        printf("\nIngrese edad: ");
        scanf("%d", &edad);
        while(edad <=0){
            printf("\nError, reingrese edad: ");
            scanf("%d", &edad);
        }
        if(nota<notaBaja || flag == 0){
            notaBaja = nota;
            sexoBajo = sexo;
        }

        if(edad < minEdad || flag ==0){
            minEdad = edad;
           minSexo = sexo;
           minNota = nota;
           flag =1;
        }

        if( sexo == 'm' && edad >18 && nota>= 6){
            contVaronesMas18++;

        }
        if(sexo == 'f' && contMujer ==  0){
            edadMujer = edad;
            notaMujer = nota;
            contMujer++;
        }
}
    promedio = (float)acumuladorNotas/5;

    printf("\nPromedio: %.2f\n", promedio);
    printf("\nNota mas baja: %d  y sexo de esa persona es: %c", notaBaja, sexoBajo);
    printf("\nCantidad de varones mayores a 18 que sacaron igual o mas de 6: %d", contVaronesMas18);
    printf("\nSexo de la persona mas joven: %c y su nota es: %d", minSexo, minNota);

    if(contMujer == 0){
        printf("\nNo ingreso ninguna mujer\n");
    }
    else {
       printf("\nEdad de la primer mujer: %d y su nota: %d", edadMujer, notaMujer);

    }



    return 0;
}
