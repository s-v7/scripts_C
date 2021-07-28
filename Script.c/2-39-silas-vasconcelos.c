#include<stdio.h>

int main()
{
	float Vvenda=0;
	char OpAPagar=0;
	float  venda=0;
    float  vendaTotal=0;
	//Entrada de Dados
	printf("Digite o Valor a pagar! ");
	scanf("%f", &Vvenda);
		printf("Escolha uma forma de Pagamento!
		\nDesconto de 10 por cento para Vendas a Vista: Escolha a Opção(A)
		\nVenda a Prazo de 30 dias:Desconto de 5 por cento!Opção(B)
		\nVenda a Prazo de 60 Dias:Mesmo Preço!Opção(C)
		\nVenda a prazo de 90 dias:Acréscimo de 5 por cento!Opção(D)
		\n Venda com cartão de débito: Desconto de 8 por cento!Opção(E)
		\nVenda com cartão de crédito:Desconto de 7 por cento!Opção(F)\n ");
			scanf("%s", &OpAPagar);
		
		switch(OpAPagar)
		{
			case 'A':
				venda = (Vvenda *  10 / 100);
			       	vendaTotal = Vvenda - venda;
				printf("%.2f Valor a Pagar! ", vendaTotal);
				break;
			case 'B':
				venda = (Vvenda * 5 / 100);
				vendaTotal = Vvenda - venda;
				printf("%.2f Valor a Pagar!", vendaTotal);
				break;
			case 'C':
				printf("%.2f O Valor a Pagar será o mesmo!", Vvenda);
				break;
			case 'D':
				venda = (Vvenda * 5 / 100);
				vendaTotal = Vvenda + venda;
				printf("%2.f O valor a Pagar!", vendaTotal);
				break;
			case 'E':
				venda = (Vvenda * 8 / 100);
				vendaTotal = Vvenda - venda;
				printf("%.2f Valor a Pagar!", vendaTotal);
				break;
			case 'F':
				venda = (Vvenda * 7 / 100);
				vendaTotal = Vvenda -  venda;
				printf("%.2f Valor a Pagar!", vendaTotal);
				break;
			default:
				printf("Opção Invalida!");
			}

			return 0;
}

