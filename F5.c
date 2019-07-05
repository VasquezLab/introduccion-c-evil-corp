#include <stdio.h>
int reverse(int n);


int main()
{
   int n;
 
   printf("Ingrese un número\n");
   scanf("%d", &n);
 

 
   printf("El numero invertido es = %d\n", reverse(n));
 
   return 0;
}

int reverse(int n){

    int reverse = 0;

    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n       = n/10;
    }

    return reverse;
}