#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void miFuncion(char matriz[][20],int filas);
int main()
{
    char nombres[5][20] = {"juan CARLOS", "LUIS alberto", "aNa", "alberto", "juan"};
    miFuncion(nombres, 5);


    return 0;
}
void miFuncion(char matriz[][20],int filas)
{
    int i,k;
    //recorre la matriz
    for(i=0; i<filas; i++)
    {
        strlwr(matriz[i]); //paso todo a minusculas
        for(k=0; k<20; k++)
        {
            if(matriz[i][k] == ' ')
            {
                matriz[i][k+1] = toupper(matriz[i][k+1]);
            }
        }
        matriz[i][0] = toupper((matriz[i][0]));
        printf("%s\n", matriz[i]);


    }
}






