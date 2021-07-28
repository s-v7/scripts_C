#include<stdio.h>

int main()
{
	int Ano;

	printf("Enter Ano: ");
		scanf("%d", &AnoNascimento);
		//Teste e Condicional 
		if((Ano % 4 == 0 && Ano != 100) || ano % 400 == 0)
		{
			printf("Bissexto");
		}
		else
		{
			printf("Não Bissexto");
		}
		return 0;
}
