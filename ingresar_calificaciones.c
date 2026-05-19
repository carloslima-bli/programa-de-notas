#include <stdio.h>
#include "ingresar_calificaciones.h"
 
void ingresarCalificaciones(float (*matriz)[ASIGNATURAS], int estudiantes) {
    printf("\n--- INGRESO DE NOTAS (Rango: 0 a 10) ---\n");
    for (int i = 0; i < estudiantes; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        for (int j = 0; j < ASIGNATURAS; j++) {
            float nota;
            do {
                printf("  Asignatura %d: ", j + 1);
                scanf("%f", &nota);
                if (nota < 0.0 || nota > 10.0) {
                    printf("  [Error] La nota debe estar entre 0 y 10. Intente de nuevo.\n");
                }
            } while (nota < 0.0 || nota > 10.0);
           
            matriz[i][j] = nota;
        }
    }
}