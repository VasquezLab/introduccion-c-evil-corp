#include <stdio.h>
#include <math.h>
void serieSum(int x, int n);
int factorial(int n);

int main()
{
    int x, n;
    printf("Introduzca valor de x: \n");
    scanf("%d", &x);
    printf("Introduzca número de términos: \n");
    scanf("%d", &n);
    serieSum(x, n);
    return 0;
}

void serieSum(int x, int n)
{
    int t = 1;
    int y = 2;
    double suma = 1;
    for (int i = 1; i < n; i++)
    {
        t = -1 * t;
        double term = t * (pow(x, y)) / factorial(y);
        suma = suma + term;
        y = y + 2;
    }
    printf("\nLa suma de la serie es %f\n\n", suma);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}