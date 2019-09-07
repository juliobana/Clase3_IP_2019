#include <stdio.h>
#include <stdlib.h>
void cargaSecuencialUnArray(int parametroArray[],int cant);
int main()
{
    int cantidad=5;
    int miArray[];
    cargaSecuencialUnArray(miArray,cantidad);
}
void cargaSecuencialUnArray(int parametroArray[],int cant){
    int indice;
    for(indice=0;indice<cant;indice++){
        printf("\n ingrese numero");
        scanf("%d",&parametroArray[indice]);
    }
}

