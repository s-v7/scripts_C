#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int px1 = get_int("Digite o Ponto X1: ");
    int py1 = get_int("Digite o Ponto Y1: ");
    int px2 = get_int("Digite o Ponto X2: ");
    int py2 = get_int("Digite o Ponto Y2: ");
    int u1 =((px2 * px2) - (px1 * px1));
    //int u = pow(u1, v1);
    int v1 = ((py2 * py2) - (py1 * py1));
    float z = u1 + v1;
    
    float dist = sqrt(z);
    printf(" %.2f   ", dist);
}