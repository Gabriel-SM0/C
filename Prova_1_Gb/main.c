#include <stdio.h>
#include <stdlib.h>

int calculo_volume(int alturaL, int larguraL, int comprimentoL)              //Cria��o da fun��o de volume (tem L, de local, no final para diferenciar das vari�veis globais das "Int Main")
{
    float volume;
    volume=(alturaL*larguraL*comprimentoL);                                  //formula do calculo do volume
    return volume;
}

int main()
{
    int altura [10];                                                        //Variavel da altura para ate 10 caixas
    int largura [10];                                                       //Variavel da largura para ate 10 caixas
    int comprimento [10];                                                   //Variavel do comprimento para ate 10 caixas
    int ncaixa;                                                             //Vari�vel para o n�mero de caicas que o usu�rio ir� digitar
    int cont;                                                               //Vari�vel de contagem para as vari�veis de dados
    int volume_final;                                                       //Vari�vel de volume final
    printf("Informe o n�mero de caixas: (Maximo de 10) \n");                //Pede para o Usu�rio o xcaixa
    scanf("%d",&ncaixa);
    for (cont=1; cont<=ncaixa; cont++)                                     //Fun��o que coleta os valores de altura, largura e comprimento das caixas, ela vai de 1 at� o valor de caixas que o usu�rio digitou
    {
        printf("Informe o valor da altura da caixa %d: \n",cont);          // Pega a altura na posi��o cont
        scanf("%d",&altura[cont]);
        printf("Informe o valor da largura da caixa %d: \n",cont);          //Pega largura na posi��o cont
        scanf("%d",&largura[cont]);
        printf("Informe o valor do comprimento da caixa %d: \n",cont);      //Pega o comprimento na posi��o cont
        scanf("%d",&comprimento[cont]);
    }
    for (cont=1; cont<=ncaixa; cont++)                                      //� aqui que uso a fun��o do volume, para calcular o volume das caixas
    {
        volume_final=calculo_volume(altura[cont],largura[cont],comprimento[cont]);
        if (volume_final>=100)                                              //Exibe na tela somente valores acima de 100 cm3
            (printf("O volume da caixa %d eh de %d cm3. \n", cont, volume_final));
    }
    printf("N�o foram mostrados valores inferiores a 100 cm3.\n");          //No final resolvi colocar essa redundancia para o cara saber por que alguns valores de volume n�o foram mostrados. Essa frase sempre vai aparecer.
    return 0;
}
