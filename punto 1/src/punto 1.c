/*
 ============================================================================
1. Realizar una función que  reciba como parámetro el importe de un producto y un porcentaje de descuento.
La función retornará el  importe con el descuento aplicado. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float funcionDescuento (float importe, int descuento);


int main(void) {
		setbuf(stdout, NULL);
	float importe;
	float importeDescuento;
	int descuento;

	printf("Ingrese el importe: ");
	fflush(stdin);
	scanf("%f", &importe);

	printf("Ingrese el descuento: ");
	fflush(stdin);
	scanf("%d", &descuento);

	importeDescuento = funcionDescuento (importe, descuento);

	printf("El importe con el descuento aplicado es de: $%.2f: ", importeDescuento);

	return 0;
}

float funcionDescuento (float importe, int descuento){

	float importeAplicado;

	importeAplicado = importe - (importe * descuento) / 100;

	return importeAplicado;
}
