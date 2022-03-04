//Práctica 7 Informatica Basica Ejercicio 2
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*En una sucursal bancaria, los datos asociados a una cuenta
bancaria son: número de cuenta y saldo. Cada cliente de la sucursal dispone de
2 cuentas, siendo los datos del cliente: dni, nombre y sus 2 cuentas. Escribir un
programa es C que pida por pantalla los datos para 3 clientes y a continuación
escriba para cada cliente: sus datos (dni y nombre) junto con su saldo total si
este es positivo, y sus datos (dni y nombre) junto a un mensaje que indique que
el cliente no tiene permiso de extracción en el caso de saldo total negativo.
Finalmente, para cada cliente (independientemente de su saldo total) se debe
mostrar los datos de las cuentas en las que tiene saldo negativo.*/

#include <stdio.h>

typedef struct
{
    int numero_cuenta;
    float saldo;
} Tcuenta;

typedef struct
{
    char dni[50];
    char nombre[50];
    Tcuenta cuenta[2];
    float suma;
} Ddatos;

Ddatos info[3];

int main(void)
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("----Datos del cliente----");
        printf("\nIntroduzca el nombre del cliente: ");
        scanf("%[^\n]", info[i].nombre);
        getchar();
        printf("Introduzca el dni del cliente: ");
        scanf("%[^\n]", info[i].dni);
        printf("Introduzca los numeros de su primera cuenta: ");
        scanf("%d", &info[i].cuenta[0].numero_cuenta);
        printf("Introduzca el saldo de su primera cuenta: ");
        scanf("%f", &info[i].cuenta[0].saldo);
        printf("Introduzca los numeros de su segunda cuenta: ");
        scanf("%d", &info[i].cuenta[1].numero_cuenta);
        printf("Introduzca el saldo de su segunda cuenta: ");
        scanf("%f", &info[i].cuenta[1].saldo);
        getchar();
        printf("\n");
    }

    printf("\n");
    printf("----DATOS DE LOS CLIENTES----");
    for (i = 1; i <= 3; i++)
    {
        printf("\nLos datos del %d cliente", i);
        info[i].suma = info[i].cuenta[0].saldo + info[i].cuenta[1].saldo;
        printf("\n-Nombre: %s\n", info[i].nombre);
        printf("-DNI: %s\n", info[i].dni);
        if (info[i].suma > 0)
        {
            printf("-El saldo total del cliente %d: %f€\n", i, info[i].suma);
        }
        else
        {
            printf("-Usted no tiene los permisos de extraccion!\n");
            printf("-El saldo total del cliente %d: %f€\n", i, info[i].suma);
        }
    }
}