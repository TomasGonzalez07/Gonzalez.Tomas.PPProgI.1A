/*
 ============================================================================
 Name        : 1er.c
 Author      : Tomas Gonzalez
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
y devuelva el valor del producto con un descuento del 5%.
Realizar la llamada desde el main.
*/
float aplicarDescuento(int precioProducto);

/*2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres
como primer parámetro y un carácter como segundo
y devuelva la cantidad de veces que ese carácter aparece en la cadena*/
int contarCaracteres(char cadenaCaracteres[],char caracter);

int main(void) {
	setbuf(stdout,NULL);

//1
	float precioProductoDescuento = aplicarDescuento(100);
	printf("El precio del producto con el descuento es de: %.2f \n",precioProductoDescuento);
//2
	char cadenaCaracteres[10] = "fiona";
	char caracter = 'f';
	int cantidadCaracteresIguales = contarCaracteres(cadenaCaracteres,caracter);
	printf("la cantidad de caracteres es de: %d",cantidadCaracteresIguales);

	return EXIT_SUCCESS;
}

float aplicarDescuento(int precioProducto)
{
    int porcentajeDescuento = 5;
    float descuento;
    float precioProductoFinal;

    descuento = precioProducto * ((float)porcentajeDescuento / 100);
    precioProductoFinal = precioProducto - descuento;

    return precioProductoFinal;
}

int contarCaracteres(char cadenaCaracteres[],char caracter)
{
	int contadorCaracteres = 0;

	for(int i=0; i < strlen(cadenaCaracteres); i++)
	{
		if(cadenaCaracteres[i] == caracter)
		{
			contadorCaracteres++;
		}
	}

	return contadorCaracteres;
}




