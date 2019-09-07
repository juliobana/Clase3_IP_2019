#include <stdio.h>
#include <stdlib.h>
#define VALOR 5


int main()
{

}




 int main(void)
{
	int edades[QTY_EDADES] = {100,200,300,400,500};
	int cantidadUsuario;
	initArrayInt(edades,QTY_EDADES,22);
	cantidadUsuario = getArrayInt(edades,QTY_EDADES,"Edad?\n","Error\n",0,200,2);

	printArrayInt(edades,cantidadUsuario);
	return EXIT_SUCCESS;
}
