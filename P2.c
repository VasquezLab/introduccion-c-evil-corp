#include <stdio.h>
void mostrarTablas(int n);

int main()
{

    int n;
    printf("Introduzca un número: \n");
    scanf("%d", &n);
    mostrarTablas(n);
    return 0;
}

void mostrarTablas(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("\n-> ");
        for (int j = 1; j <= n; j++)
        {
            printf("%dx%d = %d, ", j, i, i * j);
        }
    }
    printf("\n");
}