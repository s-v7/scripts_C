#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float vIni = get_float("Digite a Km Inicial: ");
    float vFin = get_float("Digite a Km Final: ");
    float preGaso = get_float("Digite o Valor da gasolina: ");
    float vTotalAbas = get_float("Digite o Valor total Abastecido: ");
    
    float kmPerco = (vFin - vIni);
    float litAbas = vTotalAbas / preGaso;
    float consKm = kmPerco / litAbas;
    float precoKm = vTotalAbas / kmPerco;
    
    printf("%.2f Km Percorridos até o Momento\n", kmPerco); 
    printf("Litros abastecidos %.2f\n ", litAbas);
    printf("O consumo Km/l %.2f\n ", consKm);
    printf("Preço Km %.2f ", precoKm);
}