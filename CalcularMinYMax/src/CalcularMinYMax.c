/*
 ============================================================================
 Name        : CalcularMinYMax.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calcularMaximoYMinimo(int cantidadIngresada,int *maximo,int *minimo);
int main(void) {
	int maximo;
	int minimo;
	int cantidadDeNumeros;
	printf("Ingrese cantidad de Numeros");
	scanf("%d",&cantidadDeNumeros);
	int calcularMaximoYMinimo(int cantidadDeNumeros,int &maximo,int &minimo)


}


	int calcularMaximoYMinimo(int cantidadIngresada,int *maximo,int *minimo)
	{
		int numeroIngresado;

		for(int i=0;i<cantidadIngresada;i++){

			printf("Ingrese un numero");
			scanf("%d",numeroIngresado);
				if(i==0){
					*maximo = numeroIngresado;
					*minimo = *maximo;
				}
				else if(numeroIngresado > *maximo){

					*maximo = numeroIngresado;
				}
				else if(numeroIngresado > *minimo){

					*minimo = numeroIngresado;
				}
		}





	}
