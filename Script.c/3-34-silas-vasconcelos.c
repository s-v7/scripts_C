#include<stdio.h>



int main()
{
	float t, farinha, fermento, ovos, taxa, volumefinal;

	printf("Enter Quantidade de Farinha: ");
		scanf("%f", &farinha);
		printf("Enter Fermento: ");
			scanf("%f", &fermento);

			ovos = ((farinha / 400) + 0.5);
			taxa = ((fermento / farinha) * 100);
			volumefinal = (t * taxa);
			printf("Ovos %.f \nAnd Taxa %.1f", ovos, taxa);

			return 0;
}
//Professor: A relação do tempo necessário para chegar ao volume final não consegui entender
// o valor de 15 minutos com a taxa de 5%  atingir o volume final de 2078.9cm³! Se o senhor pode enviar de volta com alguma infomação
// E A FUNÇÃO round() a máquina que estou apresenta erros na hora de compila..
//  me desculpas pelos exércios que não consegui solucionar todo o problema, vou continuar tentando!!!Obrigado Professor!!
//  


