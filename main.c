#include <stdio.h>
#include "ingresar_calificaciones.h"

#define MAX_ESTUDIANTES 100
#define ASIGNATURAS 3
 
int main(){


    float calificaciones[MAX_ESTUDIANTES][ASIGNATURAS];
    int estudiantes;
 
    printf("Ingrese el numero de estudiantes (Maximo %d): ", MAX_ESTUDIANTES);
    scanf("%d", &estudiantes);
 

    if (estudiantes <= 0 || estudiantes > MAX_ESTUDIANTES) {
        printf("Numero de estudiantes no valido.\n");
 }
        return 0;
        }

int main()
{

    

    return 0;
}
