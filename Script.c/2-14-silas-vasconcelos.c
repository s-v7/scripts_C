#include<stdio.h>

int main()
{
	int idade;

	printf("Digite a idade de uma pessoa!: ");
		scanf("%d", &idade);
		if(idade < 16)
		{
			printf("Não tem Idade para ser Eleitor Ainda!");

		}
		else if(idade > 18 && idade < 65)
		{
			printf("Obrigátorio!");
		}
		else if(idade == 16 || idade == 17 || idade > 65)
		{
			printf("Facultativo!");
		}
		else
		{
			printf("Não Existe!");
		}

		return 0;
}

