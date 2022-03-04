//Práctica 9 Informatica Basica
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*Se necesitan, al menos,las siguientes funciones básicas:
    a)Leer una matriz desde un fichero 
    b)Mostrar una matriz en pantalla   
    c)Calcular la transpuesta de una matriz
    d)Obtener  el  valor  máximo  en  una  fila  que  indique  el  usuario  para  una  matriz concreta
    e)Calcular la media aritmética de los elementos de la diagonal secundaria de una matriz
    f)Calcular el producto de dos matrices
    g)Menú con las opciones anteriores

Problema: Escribir un programa en lenguaje C, que haciendo uso de las llamadas a las funciones básicas, 
mencionadas anteriormente, muestre al usuario un menú en pantalla para realizar las siguientes 
tareas con las matrices A y B de tamaño 3x3. 
    1.Mostrar en pantalla las matrices A y B
    2.Mostrar la matriz transpuesta de A y de B
    3.Máximo en una fila de A y máximo en la misma fila para B
    4.Medias aritméticas de los elementos de la diagonal secundaria de A y de B
    5.Mostrar los productos AxB y BxA
    6.Salir del programa*/

#include <stdio.h>

int opcion, media, fila;
char nombre[50];
int i, j;
int A[3][3];
int B[3][3];
int resul[3][3];
int max = 0;

void menu(void);
void leer_matriz(int A[3][3]);
void mostrar_matriz(int A[3][3]);
void traspuesta_matriz(int A[3][3]);
void maximo(int i, int A[3][3]);
void media_aritmetica(int A[3][3]);
void producto(int A[3][3], int B[3][3]);

int main(void)
{
    menu();
    return 0;
}

void menu(void)
{
    printf("----Programa sobre matrices---\n");
    printf("--Matriz A--\n");
    leer_matriz(A);
    printf("--Matriz B--\n");
    leer_matriz(B);
    do
    {
        printf("\n\n--------------------MENU--------------------\n");
        printf("1)Mostrar las matrices A y B por pantalla\n");
        printf("2)Mostrar la matriz transpuesta de A y de B\n");
        printf("3)Máximo en una fila de A y máximo en la misma fila para B\n");
        printf("4)Medias aritméticas de los elementos de la diagonal secundaria de A y de B\n");
        printf("5)Mostrar los productos AxB y BxA\n");
        printf("6)Salir del programa\n");
        printf("Introduzca una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\n---OPCION 1---\n");
            printf("--Matriz A--\n");
            mostrar_matriz(A);
            printf("--Matriz B--\n");
            mostrar_matriz(B);
            break;
        case 2:
            printf("\n---OPCION 2---\n");
            printf("--Traspuesta de la matriz A--\n");
            traspuesta_matriz(A);
            printf("--Traspuesta de la matriz B--\n");
            traspuesta_matriz(B);
            break;
        case 3:
            printf("\n---OPCION 3---\n");
            printf("\nIndique una fila: ");
            scanf("%d", &fila);
            while (fila > 3 || fila <= 0)
            {
                printf("ERROR. Introduzca una opcion valida\n");
                printf("Indique una fila: ");
                scanf("%d", &fila);
            }
            printf("---Maximo de la fila %d de A---\n", fila);
            maximo(fila - 1, A);
            printf("---Maximo de la fila %d de B---\n", fila);
            maximo(fila - 1, B);
            break;
        case 4:
            printf("\n---OPCION 4---\n");
            media_aritmetica(A);
            printf("\nMedia artimetica de la diagonal secundaria de A: %d", media);
            media_aritmetica(B);
            printf("\nMedia artimetica de la diagonal secundaria de B: %d", media);
            break;
        case 5:
            printf("\n---OPCION 5---\n");
            printf("------ A x B ------\n");
            producto(A, B);
            printf("------ B x A ------\n");
            producto(B, A);
            break;
        default:
            printf("\n");
        }
    } while (opcion != 6);
    printf("\n---OPCION 6 SELECIONADA---\n");
    printf("Saliendo del programa\n");
}

void leer_matriz(int A[3][3])
{
    FILE *fichero;
    printf("Introduzca el nombre del fichero con su extension: ");
    scanf("%s", nombre);
    fichero = fopen(nombre, "r");
    while (fichero == NULL)
    {
        printf("Error en la apertura del fichero.\n");
        printf("Introduzca el nombre del fichero con su extension: ");
        scanf("%s", nombre);
        fichero = fopen(nombre, "r");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            fscanf(fichero, "%d", &A[i][j]);
        }
    }
    fclose(fichero);
}

void mostrar_matriz(int A[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

void traspuesta_matriz(int A[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
}

void maximo(int i, int A[3][3])
{
    int max = 0;
    for (j = 0; j < 3; j++)
    {
        if (max < A[i][j])
        {
            max = A[i][j];
        }
    }
    printf("%d \n", max);
}

void media_aritmetica(int A[3][3])
{
    for (i = 0; i < 3; i++)
    {
        media = media + A[i][j - 2];
    }
    media = media / 3;
}

void producto(int A[3][3], int B[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            resul[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j];
            printf("%d\t", resul[i][j]);
        }
        printf("\n");
    }
}
