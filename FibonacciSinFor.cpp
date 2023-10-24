#include <stdio.h>

void fibonacciSeries(unsigned long long primero, unsigned long long segundo, unsigned long long n) 
{
    if (n == 0) 
	{
        return;
    }
    printf("%llu ", primero);
    fibonacciSeries(segundo, primero + segundo, n - 1);
}

int main() 
{
    unsigned long long n, primero = 0, segundo = 1;
    printf("Escribe el numero de elementos para la serie: ");
    scanf("%llu", &n);

    printf("Serie de Fibonacci hasta el termino %llu:\n", n);
    fibonacciSeries(primero, segundo, n);
    printf("\n");

    return 0;
}

