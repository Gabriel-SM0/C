#include <stdio.h>
#include <stdlib.h>
int FuncaoMaluca(int ValorRecebidoL)                                //Fun��o do fluxograma proposta na prova
{
    int ValorCalculadoL;                                            //Insiro a variavel local que ser� a saida da fun��o
    ValorCalculadoL=0;                                              //Zero o valor calculado para limpar a memoria, por precaus�o
    if (ValorRecebidoL>10)                                          //Condi��o
        ValorCalculadoL=ValorRecebidoL-5;
    else
        ValorCalculadoL=ValorRecebidoL+2;
    return ValorCalculadoL;                                         //Retorno do programa
}
int main()                                                          //!!!!FUN��O PRINCIPAL!!!!
{
    int VR[15];                                                     //Vetor dos valores recebidos
    int VC[15];                                                     //Vetor dos valores calculados
    int pos;                                                        //Variavel da posi��o no vetor
    int Maximo;                                                     //Maximo de valores para colocar no vetor, criei para poder testar o programa mais rapido
    int auxiliar;                                                   //Contador auxiliar para mostrar apenas a quantidade de valores do vetor que o usuario digitou
    auxiliar=0;
    Maximo=15;                                                      //Determina��o da quantidade de valores aceitas nos vetores, limitada pelo tamano do vetor
    for (pos=0; pos<Maximo; pos=pos+1)                              //La�o para pegar valores
    {
        printf("Informe o valor %d/%d (para parar digite o o numeral ZERO):  \n",pos+1,Maximo);  //Pede os valores recebidos
        scanf("%d",&VR[pos]);                                       //Coleta os valores recebidos
        auxiliar=auxiliar+1;                                        //Implementa��o do contador auxiliar
        if (VR[pos]==0)                                             //Condi��o para EXIBIR o ultimo numeto digitado caso o usuario digite ZERO
            auxiliar=auxiliar-1;
        if (VR[pos]==0)                                             //Para de pegar os valores caso o usuario digite zero
            break;
            else                                                    //Joga todos os valores antes do ultimo na fun��o l� de cima
                (VC[pos]=FuncaoMaluca(VR[pos]));
    }
    for (pos=0; pos<=auxiliar-1; pos=pos+1)                         //Mostrando os valores na tela (com auxiliar -1 para nao exibir o zero)
    {
        printf("Os valores recebidos foram %d \n", VR[pos]);
    }
    for (pos=0; pos<=auxiliar-1; pos=pos+1)                         //Mostrando os valores Calculados na tela (com auxiliar -1 para nao exibir o zero)
    {
        printf("E os valores calculados foram %d \n", VC[pos]);
    }

    return 0;
}
