#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    int X = get_int("Digite o valor de X: ");
    int Y = get_int("Digite o valor de Y: ");
    int absoluto = abs(X - Y);
    int maiorXy = (X + Y + absoluto) / 2;
    printf("O maior  valor é de %i ", maiorXy);
    
}