#include "notebook.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int ordenarNotebooks(eNotebook lista[], int tam)
{
    int retorno = 0;
    eNotebook aux;

    if(lista!=NULL && tam>0)
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if((strcmp(lista[i].marca, lista[j].marca) == 0 && lista[i].precio > lista[j].precio) || (strcmp(lista[i].marca, lista[j].marca)!=0 && strcmp(lista[i].marca, lista[j].marca)>0))
                {
                    aux = lista[i];
                    lista[i] = lista[j];
                    lista[j] = aux;
                }
            }
        }
        retorno = 1;
    }
    return retorno;
}

void mostrarNotebook(eNotebook notebook)
{
    printf(" %d      %10s         %s       %d\n", notebook.id, notebook.procesador, notebook.marca, notebook.precio);
}

int mostrarNotebooks (eNotebook lista[], int tam)
{
    //ordenarNotebooks(lista, tam);
    int retorno = 0;
    if(lista!=NULL && tam>0)
    {
        printf("               *** LISTADO DE NOTEBOOKS ***\n\n");
        printf(" ID        PROCESADOR         MARCA        PRECIO\n");
        printf("---------------------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {
            mostrarNotebook(lista[i]);
        }
        printf("---------------------------------------------------------\n");
        retorno = 1;
    }
    return retorno;
}
