#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int  X = get_int("Informe uma Quantidade X de segundos: ");
    
   int horas = (X / 3600);
   int minutos = ((X - horas * 3600) / 60);
   int segundos = (X % 60);
   printf("%ih %im %is ", horas, minutos, segundos);
   
   
}