#include <stdio.h>

int Fibonacci(int n)
{
	//for(int x=0;x<n;x++)
	//{
		if(n==0)
		{
			return 0;
		}
		else if(n==1)
		{
			return 1;
		}
		else if(n>1)
		{
			return (Fibonacci(n-1)+Fibonacci(n-2));
		}
	//}
} 

int main()
{
	int cant,x;
	printf("Escriba el numero de elementos para la Serie Fibonacci: ");
	scanf("%d",&cant);
	
	printf("Elementos de la Serie: ");
	
	for(x=0;x<cant;x++)
	{
		printf("%d ",Fibonacci(x));
	}
	return 0;
}
