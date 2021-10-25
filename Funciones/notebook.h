#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    int precio;
}eNotebook;

#endif // NOTEBOOK_H_INCLUDED
int ordenarNotebooks(eNotebook lista[], int tam);
void mostrarNotebook(eNotebook notebook);
int mostrarNotebooks (eNotebook lista[], int tam);
