#include <stdio.h>
#include <stdlib.h>

int main()
{
    float GA;               //Cria espaço para a variavel GA
    float GB;               //Cria espaço para a variável GB
    float GC;               //Cria espaço para a variavel GC


    printf("Informe o valor da nota do GA do elemento \n");  //Pede para o Usuário digitar o valor da nota do grau A
    scanf("%f", &GA);        //Pega a nota do GA
    printf("Informe o valor da nota do GB do elemento \n");
    scanf("%f", &GB);

    if (((GA+2*GB)/3>=6)
        printf("Passou \n");
        else
        printf("Rodou");


    return 0;
}
