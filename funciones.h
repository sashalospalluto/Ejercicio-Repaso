#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int legajo;
    char nombre [30];
    float promedio;
    int edad;
}sAlumno;


void funcionMostrar (sAlumno miAlumno[], int tam);

sAlumno funcionCargar ();


#endif // FUNCIONES_H_INCLUDED
