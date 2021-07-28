#include<stdio.h>


int main()
{
	int qtde=0, i=0, n=0, sum=0;
	int media=0, maiorNumero=0, menorNumero=0;
	//Entrada de Dados
	printf("Enter a Quantidade de valores a calcular: ");
		scanf("%d", &qtde);
		//Laço para Calcular os valores	
		for(i = 0; i < qtde; i++)
		{
			printf("Enter com os Valore N[%d]: ", i);
				scanf("%d", &n);
				sum += n;
				media = (float(sum / qtde));	
		}
		//Saída de Dados
		printf("Média %d ", media);
		//printf("Maior %d ",);
		//printf("Menor %d ", menorNumero);

}
// Professor, os valores maximo e mínimo tentei mais nao obtive valores
//


