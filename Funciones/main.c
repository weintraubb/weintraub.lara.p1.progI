#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "notebook.h"
#define TAM 5

int contarCaracteres(char cadena[], char caracter);
float aplicarDescuento(int precio);

int main()
{
    //FUNCION 1
    int precio = 100;
    float precioFinal;

    printf("El precio es %d", precio);
    precioFinal = aplicarDescuento(precio);
    printf("\nEl precio con descuento es %.2f\n\n", precioFinal);


    //FUNCION 2
    char cadena[20] = "Hola buenas tardes";
    char caracter = 'a';
    int cantidad;

    printf("La cadena es: Hola buenas tardes");
    cantidad = contarCaracteres(cadena, caracter);
    printf("\nLa cantidad de veces que se repitio el caracter -%c- es: %d\n\n", caracter, cantidad);


    //FUNCION 3
    eNotebook notebooks[TAM] = {{1000, "Ryzen", "Dell", 90000}, {1001, "Ryzen", "Apple", 100000}, {1002, "Ryzen", "Dell", 92000}, {1003, "Ryzen", "Apple", 93000}, {1004, "Ryzen", "Dell", 80000}};


    ordenarNotebooks(notebooks, TAM);
    mostrarNotebooks(notebooks, TAM);

    return 0;
}
float aplicarDescuento(int precio)
{
    float precioFinal;
    float descuento;
    descuento = (float)(5*precio)/100;
    precioFinal = precio-descuento;

    return precioFinal;
}

int contarCaracteres(char cadena[], char caracter)
{
    int largo;
    int contador=0;

    largo = strlen(cadena);
    for(int i=0; i<largo; i++)
    {
        if(cadena[i] == caracter)
        {
            contador++;
        }
    }
    return contador;
}

