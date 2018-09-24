#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

void funcionMostrar (sAlumno miAlumno[], int tam)
{
    system("cls");

    for (int i=0; i<tam; i++)
    {
        printf("\n\n\tALUMNO %d",i+1);
        printf("\nALUMNO: %s",miAlumno[i].nombre);
        printf("\nLEGAJO: %d", miAlumno[i].legajo);
        printf("\nPROMEDIO: %.2f",miAlumno[i].promedio);
        printf("\nEDAD: %d", miAlumno[i].edad);
    }
}

//FUNCION PARA LISTAR ALUMNO
int cargarListadoAlumnos (sAlumno listado [], int tam)
{
    int i;

    i=buscarLibre (listado,tam);

    if (i!=-1)
    {
        listado[i]=pedirAlumno();
        listado [i].estado=OCUPADO;

    }

    return i;

}


//FUNCION PARA BUSCAR ESPACIO

int buscarLibre (sAlumno lista [], int tam)
{
    {
        int i;
        int flag=-1;
        for (i=0; i=tam; i++)
        {
            if(listado[i].estado==0)
            {
                flag=i;
                break;
            }
        }

        return flag;
    }
}

void funcionMostrar (sAlumno miAlumno[], int tam)
{
    system("cls");

    for (int i=0; i<tam;i++)
    {
        if (miAlumno[i].estado==1)
        printf("\n\n\tALUMNO %d",i+1);
        printf("\nALUMNO: %s",miAlumno[i].nombre);
        printf("\nLEGAJO: %d", miAlumno[i].legajo);
        printf("\nPROMEDIO: %.2f",miAlumno[i].promedio);
        printf("\nEDAD: %d", miAlumno[i].edad);
    }
}

