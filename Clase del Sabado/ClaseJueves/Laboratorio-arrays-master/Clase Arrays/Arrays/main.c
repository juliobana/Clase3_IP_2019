#include <stdio.h>
#include <stdlib.h>
#include "funcionesArrays.h"
#define QTY_EDADES 5
#define VALOR_EDADES 25
//int imprimirArrayInt(int *pArray , int limite);
int cargarArrayInt(int *pArray , int limite, int valor);
void inicializarUnArray(int parametroArray[],int cant);


int main()
{
//int edades[QTY_EDADES] = {330,200,300,400,500};
//imprimirArrayInt(edades,QTY_EDADES);
//int edades[QTY_EDADES];
//cargarArrayInt(edades,QTY_EDADES,VALOR_EDADES);


}

void inicializarUnArray(int parametroArray[],int cant){
    int indice;
    for(indice=0;indice<cant;indice++){
    parametrosArray[indice]=0
    }
}

void mostrarUnArray(int parametroArray[],int cant){
int indice;
for(indice=0;indice<cant;indice++){
    printf("\n numero: %d"parametrosArray[indice]);
    }
}
