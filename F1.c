#include <stdio.h>
void multiplo(int n, int m);

int main()
{
    int n, m;
    printf("Introduzca un primer número: \n");
    scanf("%d", &n);
    printf("Introduzca un segundo número: \n");
    scanf("%d", &m);
    multiplo(n, m);
    return 0;
}

void multiplo(int n, int m)
{
    int p = 0;
    int q = 1;
    if (m % n == 0)
        printf("%d\n\n", p);
    else
        printf("%d\n\n", q);
}