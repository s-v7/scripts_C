#include<stdio.h>


int main()
{
	int l1, l2, l3;

	printf("Digite o lado 1: ");
		scanf("%d", &l1);
		printf("Digite o lado 2: ");
			scanf("%d", &l2);
			printf("Digite o lado 3: ");
				scanf("%d", &l3);
				if(l1 == l2 && l1 == l3 && l2 == l3)
				{
					printf("Equilátero!");
				}
				else if(l1 == l2 || l1 == l3 || l2 == l3 && l1 != l2)
				{
					printf("Isósceles!");
				}
				else if(l1 == l2 || l1 == l3 || l2 == l3 && l1 != l3)
				{
					printf("isósceles");
				}
				else if(l1 == l2 || l1 == l3 || l2 == l3 && l2 != l3)
				{
					printf("Isósceles");
				}
				else if( l1 != l2 && l2 != l3 && l1 != l3 )
				{
					printf("Escaleno!");
				}



				return 0;
}

