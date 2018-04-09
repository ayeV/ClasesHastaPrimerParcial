#include <stdio.h>
#include <stdlib.h>
#include "ordenarmostrar.h"

int main()
{
   int x[5] = {35,6,789,0,-8};

   ordenar(x,5);
   mostrarVector(x,5);
    return 0;
}
