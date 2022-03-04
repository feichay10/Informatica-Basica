//Práctica 4 Informatica Basica Ejercicio2
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*Escribir un programa que solicite el radio de una circunferencia y muestre
en pantalla la longitud de la circunferencia y el área del círculo para ese radio.*/

#include <stdio.h>
#define N 3.1416

int main(void)
{
    float radio, longitud, area;

    printf("Introduzca un radio: ");
    scanf("%f", &radio);

    longitud = radio * 2;
    area = N * longitud;

    printf("La longitud de la circunferencia es: %f\n", longitud);
    printf("El area de la circunferencia es: %f\n", area);
}
