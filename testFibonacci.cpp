#include <stdio.h>

void Fibonacci(unsigned long long n) 
{
    unsigned long long primero = 0, segundo = 1, sig;

    printf("Serie de Fibonacci hasta el termino %llu:\n", n);
    printf("%llu %llu ", primero, segundo); // Mostrar los primeros dos términos

    for (unsigned long long i=3;i<=n;++i) 
	{
        sig=primero+segundo;
        printf("%llu ",sig);
        primero=segundo;
        segundo=sig;
    }
    printf("\n");
}

int main() 
{
    unsigned long long n;
    printf("Escribe el numero de elementos para la serie: ");
    scanf("%llu", &n);
    Fibonacci(n);

    return 0;
}

