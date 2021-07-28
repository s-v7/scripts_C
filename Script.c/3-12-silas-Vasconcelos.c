#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Defindo variáveis 
	int f1=1, f2=1, fn, n, i;
	//Entrada de Dados
	printf("Enter Number n: ");
		scanf("%d", &n);
		printf("%d %d ", f1, f2);
	//Laço para calcular valores
		for(i = 3; i < n; i++)
		{
			fn = f1 + f2;
			printf(" %d ", fn);
			f1 = f2;
			f2 = fn;
		}
		return 0;
}
