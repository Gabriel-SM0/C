#include <stdio.h>
#include <stdlib.h>
int FuncaoMaluca(int ValorRecebidoL)                                //Função do fluxograma proposta na prova
{
    int ValorCalculadoL;                                            //Insiro a variavel local que será a saida da função
    ValorCalculadoL=0;                                              //Zero o valor calculado para limpar a memoria, por precausão
    if (ValorRecebidoL>10)                                          //Condição
        ValorCalculadoL=ValorRecebidoL-5;
    else
        ValorCalculadoL=ValorRecebidoL+2;
    return ValorCalculadoL;                                         //Retorno do programa
}
int main()                                                          //!!!!FUNÇÃO PRINCIPAL!!!!
{
    int VR[15];                                                     //Vetor dos valores recebidos
    int VC[15];                                                     //Vetor dos valores calculados
    int pos;                                                        //Variavel da posição no vetor
    int Maximo;                                                     //Maximo de valores para colocar no vetor, criei para poder testar o programa mais rapido
    int auxiliar;                                                   //Contador auxiliar para mostrar apenas a quantidade de valores do vetor que o usuario digitou
    auxiliar=0;
    Maximo=15;                                                      //Determinação da quantidade de valores aceitas nos vetores, limitada pelo tamano do vetor
    for (pos=0; pos<Maximo; pos=pos+1)                              //Laço para pegar valores
    {
        printf("Informe o valor %d/%d (para parar digite o o numeral ZERO):  \n",pos+1,Maximo);  //Pede os valores recebidos
        scanf("%d",&VR[pos]);                                       //Coleta os valores recebidos
        auxiliar=auxiliar+1;                                        //Implementação do contador auxiliar
        if (VR[pos]==0)                                             //Condição para EXIBIR o ultimo numeto digitado caso o usuario digite ZERO
            auxiliar=auxiliar-1;
        if (VR[pos]==0)                                             //Para de pegar os valores caso o usuario digite zero
            break;
            else                                                    //Joga todos os valores antes do ultimo na função lá de cima
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
