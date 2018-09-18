#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define A 3
int main()
{
    // sAlumno otroAlumno;
    sAlumno listadoMain[A];


    for (int i=0; i<A;i++)
    {
        listadoMain[i]=funcionCargar();
    }

    funcionMostrar(listadoMain, A);
/*
    otroAlumno=elAlumno;

    printf("\n\n\t DATOS DE OTRO ALUMNO");
    printf("\nALUMNO: %s",otroAlumno.nombre);
    printf("\nLEGAJO: %d", otroAlumno.legajo);
    printf("\nPROMEDIO: %.2f",otroAlumno.promedio);

*/
    return 0;
}
