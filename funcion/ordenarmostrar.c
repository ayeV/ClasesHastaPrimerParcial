#include <stdio.h>
void ordenar(int vec[], int tam){
    int i,j,aux;

    for(i=0; i<tam-1; i++){
        for(j=i+1;j<tam; j++ ){
            if(vec[i]>vec[j]){
                aux = vec[i];
                vec[i]= vec[j];
                vec[j]=aux;
            }
        }
    }

}

void mostrarVector(int vec[], int tam){
    int i;

    for(i=0; i<tam; i++){
        printf("\n%d",vec[i]);
    }

}
