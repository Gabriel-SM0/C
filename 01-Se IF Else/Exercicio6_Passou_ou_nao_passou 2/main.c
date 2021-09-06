#include <stdio.h>
#include <stdlib.h>

int main()
{
    float GA;       //Reservo espaço na memoria para a nota do GA;
    float GB;       //Reservo espaço na memória para a nota do GB;
    float GC1;       //Reservo espaço na memória para a primeira possibilidade do GC;
    float GC2;      //Reserva espaço na memória para a segunda possibilidade de GC;
    float Media;    //Reserva espaço na memoria para a Media;

    printf("Insira a nota do Grau A do Aluno. \n");
    scanf("%f", &GA);
    printf("Insira a nota do Grau B do Aluno. \n");
    scanf("%f", &GB);
    Media=(GA+GB*2)/3;
        if (Media>=6)
            printf("Passou com %.1f de Media\n", Media);
        else
                printf("Ficou com %f de Media \n", Media);
                GC1=18-GB*2;
                GC2=9-GA/2;
                if (GC1<=GC2)
                    printf("Precisa tirar %f e substituir o Grau A", GC1);
                else
                    printf("Precisa tirar %f e substituir o Grau B", GC2);


    return 0;
}
