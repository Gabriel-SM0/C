#include <stdio.h>
#include <stdlib.h>

int main()
{
    int RA;
    float n1,n2,n3; //notas
    float m;
    printf("Informe o número de alunos \n");
    scanf("%d",&RA);
    printf("Informe a primeira nota do aluno:\n");
    scanf("%f",&n1);
    printf("Informe a segunda nota do aluno: \n");
    scanf("%f",&n2);
    printf("Informe a terceira nota do aluno: \n");
    scanf("%f",&n3);
    m = (n1+n2+n3)/3.0;
      printf("A nota do aluno foi %d foi %f.", RA,m);// EU coloquei %f para pegar o número em flutuante (com vírgula) e %d para pegar inteiro
return 0;
}
