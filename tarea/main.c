#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int auxInt;

    do
    {
        printf("\n1.Alta");
        printf("\n2.Modificar");
        printf("\n3.Mostrar");
        printf("\n4.Sair");

        scanf("%d",&opcion);
        switch (opcion)
        {
        case 1:
            i=cargarListadoDeAlumnos (listadoMain, A);
            if(i!=-1)
            {
                printf("carga exitosa");
            } else
            {
                printf("no hay espacio");
            }
            break;
        case 2:
            printf("ingrese legajo");
            scanf("%d", &auxInt);

            for(i=0; i<A ;i++)
            {
                if (auxInt==listadoMain[i].estado==OCUPADO && auxInt==listadoMain [i].legajo)
                {
                    printf("ingrese nuevo promedio: ");
                    scanf("%f", &listadoMain [i].promedio);
                    break;
                }
            }
        }
    } while(opcion!=4)


    `//funcion para cargar alumno
    for (i=0; i<A;i++)
    {
        listadoMain[i].estado=VACIO;
    }



   }
