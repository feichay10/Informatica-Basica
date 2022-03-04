//Práctica 5 Informatica Basica Arrays y Estructuras Ejercicio 2
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*En una sucursal bancaria, los datos asociados a una cuenta
bancaria son: número de cuenta y saldo. Cada cliente de la sucursal dispone de
2 cuentas, siendo los datos del cliente: dni, nombre y sus 2 cuentas. Escribir un
programa es C que pida por pantalla los datos para 3 clientes y a continuación
escriba para cada cliente sus datos junto con su saldo total*/

#include <stdio.h>

typedef struct
{
    int numero_cuenta;
    float saldo;
} Tcuenta;

typedef struct
{
    char dni[10];
    char nombre[50];
    Tcuenta cuenta[2];
    float suma;
} Ddatos;

Ddatos info[3];

int main(void)
{
    printf("----Datos del primer cliente----");
    printf("\nIntroduzca el nombre del primer cliente: ");
    scanf("%[^\n]", info[0].nombre);
    getchar();
    printf("Introduzca el dni del primer cliente: ");
    scanf("%[^\n]", info[0].dni);
    getchar();
    printf("Introduzca los numeros de su primera cuenta: ");
    scanf("%d", &info[0].cuenta[0].numero_cuenta);
    printf("Introduzca el saldo de su primera cuenta: ");
    scanf("%f", &info[0].cuenta[0].saldo);
    printf("Introduzca los numeros de su segunda cuenta: ");
    scanf("%d", &info[0].cuenta[1].numero_cuenta);
    printf("Introduzca el saldo de su segunda cuenta: ");
    scanf("%f", &info[0].cuenta[1].saldo);
    getchar();

    printf("\n");
    printf("----Datos del segundo cliente----");
    printf("\nIntroduzca el nombre del segundo cliente: ");
    scanf("%[^\n]", info[1].nombre);
    getchar();
    printf("Introduzca el dni del segundo cliente: ");
    scanf("%[^\n]", info[1].dni);
    getchar();
    printf("Introduzca los numeros de su primera cuenta: ");
    scanf("%d", &info[1].cuenta[0].numero_cuenta);
    printf("Introduzca el saldo de su primera cuenta: ");
    scanf("%f", &info[1].cuenta[0].saldo);
    printf("Introduzca los numeros de su segunda cuenta: ");
    scanf("%d", &info[1].cuenta[1].numero_cuenta);
    printf("Introduzca el saldo de su segunda cuenta: ");
    scanf("%f", &info[1].cuenta[1].saldo);
    getchar();

    printf("\n");
    printf("----Datos del tercer cliente----");
    printf("\nIntroduzca el nombre del tercer cliente: ");
    scanf("%[^\n]", info[2].nombre);
    getchar();
    printf("Introduzca el dni del tercer cliente: ");
    scanf("%[^\n]", info[2].dni);
    getchar();
    printf("Introduzca los numeros de su primera cuenta: ");
    scanf("%d", &info[2].cuenta[0].numero_cuenta);
    printf("Introduzca el saldo de su primera cuenta: ");
    scanf("%f", &info[2].cuenta[0].saldo);
    printf("Introduzca los numeros de su segunda cuenta: ");
    scanf("%d", &info[2].cuenta[1].numero_cuenta);
    printf("Introduzca el saldo de su segunda cuenta: ");
    scanf("%f", &info[2].cuenta[1].saldo);
    getchar();

    printf("\n");
    printf("----DATOS DE LOS CLIENTES----");

    printf("\nLos datos del primer cliente");
    printf("\n-Nombre: %s\n", info[0].nombre);
    printf("-DNI: %s\n", info[0].dni);
    info[0].suma = info[0].cuenta[0].saldo + info[0].cuenta[1].saldo;
    printf("-El saldo total del primer cliente: %f", info[0].suma);

    printf("\n");
    printf("\nLos datos del segundo cliente");
    printf("\n-Nombre: %s\n", info[1].nombre);
    printf("-DNI: %s\n", info[1].dni);
    info[1].suma = info[1].cuenta[0].saldo + info[1].cuenta[1].saldo;
    printf("-El saldo total del segundo cliente: %f", info[1].suma);

    printf("\n");
    printf("\nLos datos del tercer cliente");
    printf("\n-Nombre: %s\n", info[2].nombre);
    printf("-DNI: %s\n", info[2].dni);
    info[2].suma = info[2].cuenta[0].saldo + info[2].cuenta[1].saldo;
    printf("-El saldo total del tercer cliente: %f\n", info[2].suma);
}
