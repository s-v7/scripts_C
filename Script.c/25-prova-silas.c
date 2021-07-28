#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    float vPremio = get_float("Informe o valor do Prémio! ");
    string nome0 = get_string("informe o Nome: ");
    float venda0 = get_float("Informe o valor de vendas no período de um ano: ");
    string nome1 = get_string("informe o Nome: ");
    float venda1 = get_float("Informe o valor de vendas no período de um ano: ");
    string nome2 = get_string("informe o Nome: ");
    float venda2 = get_float("Informe o valor de vendas no período de um ano: ");
        
    float u = (vPremio) / (venda0 + venda1 + venda2);
    float F = (u * venda0);
    float B = (u * venda1);
    float C = (u * venda2);
    float zTotal = (F + B + C); 
    
    printf("%s  Prêmio de R$ %.2f\n", nome0, F);
    printf("%s  Prêmio de R$ %.2f\n", nome1, B);
    printf("%s  Prêmio de R$ %.2f\n", nome2, C);
    printf("Soma dos Prémios R$ %.2f", zTotal);
    
    
}