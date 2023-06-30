#include <stdio.h>
#include <stdlib.h>

typedef enum { lunes,  martes, miercoles, jueves, viernes, sabado, domingo
} semana;

int main()
{
    semana dia_semanal = martes;

    if (dia_semanal == lunes) {
        printf("Estamos a lunes\n");
    }
    else {
        printf("No estamos a lunes\n");
    }

    return 0;
}
