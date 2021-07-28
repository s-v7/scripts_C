#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()

{
	//definindo Variáveis
	int n, soma=0, qtde, media;
	//Entrada de Dados
	do
	{
		printf("Enter number n: ");
			scanf("%d", &n);

			soma += n;
			qtde = sizeof(n);
			media = (soma / qtde);		
	}while(n != 0);
	//Saída de Dados
		printf("Is the sum %d ", soma);
		printf("Is the qtde %d ", qtde);
		printf("Is the mean %d ", media);

	return 0;
}
// As Variáveis qtde e media não consegui ententer como encontra a quantidade.












/*int main()
{
	int n, n1, soma=0, Qtde, Media;
	
	printf("Enter  com o Nunber 1 e em seguida digite seus números:\nPara Sair a qualquer momento digite (0): ");
		scanf("%d", &n);

		{
			while(n1 != 0)
			{
				scanf("%d", &n1);
				soma += n1;
				Qtde = sizeof(n1);
				Media = (soma / Qtde);
				
			}
			printf("Is sum %d", soma);
			printf("Is The Qtde %d", Qtde);
			printf("Is the Mean: %d", Media);
		}
		return  0;
}*/

