#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

void funcionMostrar (sAlumno miAlumno[], int tam)
{
    system("cls");

    for (int i=0; i<tam;i++)
    {
        printf("\n\n\tALUMNO %d",i+1);
        printf("\nALUMNO: %s",miAlumno[i].nombre);
        printf("\nLEGAJO: %d", miAlumno[i].legajo);
        printf("\nPROMEDIO: %.2f",miAlumno[i].promedio);
        printf("\nEDAD: %d", miAlumno[i].edad);
    }
}

sAlumno funcionCargar ()
{
    sAlumno miAlumno;
    setbuf(stdin,NULL);
    printf("Ingrese el legajo del alumno: ");
    scanf("%d", &miAlumno.legajo);
    setbuf(stdin,NULL);
    printf("\nIngrese el nombre del alumno: ");
    gets(miAlumno.nombre);
    setbuf(stdin,NULL);
    printf("\nIngrese el promedio: ");
    scanf("%f", &miAlumno.promedio);
    printf("\nIngrese edad: ");
    scanf("%d",&miAlumno.edad);

    return (miAlumno);

}

void (sAlumno miAlumno[],int tam)
{
    for (int i=0; i<tam; i++)
    {
        for (int j=i+1; j<tam;j++)
        {
            if(strcmp(miAlumno[i].legajo,miAlumno[j].legajo)>0)
            {

            }
        }
    }
}

