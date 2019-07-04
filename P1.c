#include <stdio.h>
void calcularComision(int x);

int main()
{
    int x;
    printf("Introduzca las ventas del trimestre: \n");
    scanf("%d", &x);
    calcularComision(x); /* llamada a la funcion */
    return 0;
}

void calcularComision(int x)
{
    double y;
    switch (x)
    {
    case 0 ... 20000:
        y = 0.05 * x;
        printf("La comision del trimestre es %f\n", y);
        break;

    case 20001 ... 50000:
        y = 1000 + 0.07 * x;
        printf("La comision del trimestre es %f\n", y);
        break;

    case 50001 ... 500000:
        y = 3100 + 0.1 * x;
        printf("La comision del trimestre es %f\n", y);
        break;

    default:
        printf("\n\nOPCION INVALIDA !!!!\n");
        break;
    }
}