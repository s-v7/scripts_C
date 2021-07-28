#include<stdio.h>

int main()
{
	int pinos0=0;
    float pinos1=0;
	int p =0;

	printf("Digite o Número de pinos derrubados na primeira jogada!");
		scanf("%d", &pinos0);
		if(pinos0 == 12)
		{
			printf("Parabéns voçẽ fez 30 Pontos!");
		}
		else if( pinos0 % 2 == 1)
		{
			printf("Digite uma segunda jogada! ");
				scanf("%d", &pinos1);
                                  
				 p = pinos0 * 2;
				 pinos1 += p;
				 printf("%2.f The ", pinos1);
		}
		else if(pinos0 % 2 == 0)
		{
			printf("Digite a segunda Jogada");
				scanf("%d", pinos1);
			pinos1 = pinos0 * 1,5;
			printf("%d The ", pinos1);
		}
		return 0;s

}


