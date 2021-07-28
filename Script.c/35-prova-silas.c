#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string nome = get_string("Informe Um Nome: ");
    int idade = get_int("Informe a Idade: ");
    int viveu = (idade * 365);
    printf("%s, Voçê já viveu %i dias ", nome, viveu);
}