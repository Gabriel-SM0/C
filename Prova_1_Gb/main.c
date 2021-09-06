#include <stdio.h>
#include <stdlib.h>

int calculo_volume(int alturaL, int larguraL, int comprimentoL)              //Criação da função de volume (tem L, de local, no final para diferenciar das variáveis globais das "Int Main")
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
    int ncaixa;                                                             //Variável para o número de caicas que o usuário irá digitar
    int cont;                                                               //Variável de contagem para as variáveis de dados
    int volume_final;                                                       //Variável de volume final
    printf("Informe o número de caixas: (Maximo de 10) \n");                //Pede para o Usuário o xcaixa
    scanf("%d",&ncaixa);
    for (cont=1; cont<=ncaixa; cont++)                                     //Função que coleta os valores de altura, largura e comprimento das caixas, ela vai de 1 até o valor de caixas que o usuário digitou
    {
        printf("Informe o valor da altura da caixa %d: \n",cont);          // Pega a altura na posição cont
        scanf("%d",&altura[cont]);
        printf("Informe o valor da largura da caixa %d: \n",cont);          //Pega largura na posição cont
        scanf("%d",&largura[cont]);
        printf("Informe o valor do comprimento da caixa %d: \n",cont);      //Pega o comprimento na posição cont
        scanf("%d",&comprimento[cont]);
    }
    for (cont=1; cont<=ncaixa; cont++)                                      //É aqui que uso a função do volume, para calcular o volume das caixas
    {
        volume_final=calculo_volume(altura[cont],largura[cont],comprimento[cont]);
        if (volume_final>=100)                                              //Exibe na tela somente valores acima de 100 cm3
            (printf("O volume da caixa %d eh de %d cm3. \n", cont, volume_final));
    }
    printf("Não foram mostrados valores inferiores a 100 cm3.\n");          //No final resolvi colocar essa redundancia para o cara saber por que alguns valores de volume não foram mostrados. Essa frase sempre vai aparecer.
    return 0;
}
