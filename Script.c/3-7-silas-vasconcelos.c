#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//* Algoritmo para calcular uma sequência de Elementos
// Programmer: Sv-7


int main()
{
	float n=0, i=0;
	float  S = 0;
	//Entrada de Dados
	printf("Enter Número n: ");
		scanf("%f", &n);

		for( i=1; i <=  n; i++)
		{
				S = (n + (n / i));	
		}
		printf("is %.2f", S);

}

// Professor, tentei fazer com o tipo de dados float mais não consegui...
// apenas para n = 2  o script entrega o valor de saída correto...
// caso poder retorna com uma ajuda! Obrigado
// Vou deixar em python, sei que não tem muito aver...rsrs...
// Os exercícios como não podemos usar vetores fiquei perdido mais tentei 
// e ainda continuo tentando quando tenho tempo... Obrigado!
