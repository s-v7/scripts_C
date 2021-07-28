#include<stdio.h>
#include<string.h>

int main()
{
	int dia=0;
	char mesNasci[25];
	//Entrada de Dados
	printf("Enter dia de nascinento: ");
		scanf("%d", &dia);
		printf("Enter the Mes Nascimento: ");
			scanf("%s", &mesNasci);
			//Teste e condição
			if(mesNasci == "setembro") 
			{
				printf("Primavera");
			}
			else if(mesNasci == "dezebro")
			{
				printf("Verão");
			}
			else if (mesNasci == "março")
			{
				printf("Outono");
			}
			else if(mesNasci == "junho")
			{
				printf("Inverno");
			}
			return 0;

			
}


