#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b; //variaveis informadas pelo usu�rio
    int s; //vari�vel usada para a conta, aparece na tela

    printf ("Informe o primeiro numero:\n");
    scanf("%d",&a); //pega o d e guarda na vari�vel a;
    printf ("Informe o segundio numero:\n");
    scanf("%d",&b); //pega o segundo valor e guarda como b;
    s=a+b;
    printf ("A soma de %d com %d eh %d.",a,b,s); //mensagem que aparece na tela
    return 0;

    }
