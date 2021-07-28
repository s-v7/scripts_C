#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //Entra de dados
    float SalBruto = get_float("Informe o salário Bruto: ");
    float Inss = (0.1 * SalBruto);
    float BaseIRPF = (SalBruto - Inss);
    float Irpf = (0.05 * BaseIRPF);
    float SalLiqui = (BaseIRPF - Irpf);
    //Saída de Dados
    printf("INSS %.2f\n ", Inss);
    printf("Base IRPF %.2f\n ", BaseIRPF);
    printf("IRPF %.2f\n ", Irpf);
    printf("Salário Liquido %.2f\n ", SalLiqui);
    
}