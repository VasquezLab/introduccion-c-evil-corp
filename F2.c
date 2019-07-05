#include <stdio.h>
#include <math.h>
void progresion(int x, int n);

int main()
{
    int x, n;
    printf("Introduzca x: \n");
    scanf("%d", &x);
    printf("Introduzca n: \n");
    scanf("%d", &n);
    progresion(x, n);
    return 0;
}

void progresion(int x, int n)
{
    int suma = 0;
    for (int i = 0; i <= n; ++i)
    {
        suma = suma + pow(x, i);
    }
    printf("La suma de la progresión es %d\n\n", suma);
}