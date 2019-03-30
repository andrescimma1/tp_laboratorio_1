#include <stdio.h>
#include <stdlib.h>
#include "Cimma.h"

int main()
{
    int x, y, opcion;

    do{

        system("cls");
        printf("\t\t*** MENU DE OPCIONES ***");
        printf("\n\n 1. Ingresar 1er operando: ");
        printf("\n 2. Ingresar 2do operando: ");
        printf("\n 3. Calcular todas las operaciones");
        printf("\n\ta) Calcular la suma (A+B)");
        printf("\n\tb) Calcular la resta (A-B)");
        printf("\n\tc) Calcular la division (A/B)");
        printf("\n\td) Calcular la multiplicacion (A*B)");
        printf("\n\te) Calcular el factorial (A!)");
        printf("\n 4. Informar resultados");
        printf("\n 5. Salir");
        printf("\n\n Opcion: ");
        scanf("%d", &opcion); //Guardo la opcion elegida

    switch(opcion)
    {
        case 1:
            system("cls");
            printf("Ingrese el 1er operando: ");
            scanf("%d", &x);
            break;
        case 2:
            system("cls");
            printf("Ingrese el 2do operando: ");
            scanf("%d", &y);
            break;
        case 3:
            system("cls");
            printf("Todas las operaciones fueron calculadas... \n\n Por favor, en el menu de opciones digite la opcion 4");
            getch();
            break;
        case 4:
            system("cls");
            printf("Los resultados son: \n\n");
            printf("El resultado de %d + %d es: %d", x, y, Sumar(x,y));
            printf("\na) El resultado de %d - %d es: %d", x, y, Restar(x,y));
            printf("\nb) El resultado de %d / %d es: %d", x, y, Dividir(x,y));
            printf("\nc) El resultado de %d * %d es: %d", x, y, Multiplicar(x,y));
            printf("\nd) El factorial de %d es: %d y El factorial de %d es: %d", x, Factorial1(x), y, Factorial2(y));
            getch();
            break;
        case 5:
            break;
        default:
            system("cls");
            printf("La opcion que ingreso es incorrecta");
            getch();
            break;
    }


    }while(opcion != 5);
    return 0;
}
