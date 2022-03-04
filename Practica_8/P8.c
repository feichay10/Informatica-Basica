//Práctica 8 Informatica Basica
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*Escribir un programa que lea dos matrices A y B de tamaño 3x3 desde un fichero. 
A continuación debe mostrarlas en pantalla. Además debe realizar los siguientes cálculos:
    a)La suma de A y B y almacenarla en el ficheroResultados.txt
    b)La suma de cada una de las filas de la matriz A y almacenarla en el fichero Resultados.txt
    c)El valor mínimo de la diagonal principal de la matriz B y almacenarlo en el fichero Resultados.txt*/

#include <stdio.h>

int main(void)
{
    char nombre[50];
    int i, j;
    int A[3][3];
    int B[3][3];
    int C[3][3];
    int numero;
    int suma;

    FILE *fichero;
    printf("Introduzca el nombre del fichero con su extension: ");
    scanf("%s", nombre);
    fichero = fopen(nombre, "r");
    if (fichero == NULL)
    {
        printf("Error en la apertura del fichero.\n");
        return 0;
    }
    else
    {
        printf("Matriz A:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                fscanf(fichero, "%d", &A[i][j]);
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%i\t", A[i][j]);
            }
            printf("\n");
        }
    }
    printf("Matriz B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            fscanf(fichero, "%d", &B[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i\t", B[i][j]);
        }
        printf("\n");
    }
    fclose(fichero);

    FILE *resultado;
    resultado = fopen("ficheroResultados.txt", "w");
    fprintf(resultado, "La suma de la dos matrices es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            fprintf(resultado, "%d\t", C[i][j]);
        }
        fprintf(resultado, "\n");
    }
    fprintf(resultado, "\n");
    fclose(resultado);

    FILE *resultado1;
    resultado1 = fopen("Resultados.txt", "w");
    fprintf(resultado, "La suma de cada una de las filas de la matriz A:");
    for (i = 0; i < 3; i++)
    {
        suma = 0;
        for (j = 0; j < 3; j++)
        {
            suma = suma + A[i][j];
        }
        fprintf(resultado1, "\nLa suma de la fila %d es: %d", i + 1, suma);
    }
    fprintf(resultado1, "\n");

    fprintf(resultado1, "\nEl valor minimo de la diagonal principal de la matriz B es: ");
    if (B[0][0] < B[1][1] && B[0][0] < B[2][2])
    {
        fprintf(resultado1, "%d", B[0][0]);
    }
    else if (B[1][1] < B[0][0] && B[1][1] < B[2][2])
    {
        fprintf(resultado1, "%d", B[1][1]);
    }
    else if (B[2][2] < B[1][1] && B[2][2] < B[0][0])
    {
        fprintf(resultado1, "%d", B[2][2]);
    }
    fclose(resultado1);
}
