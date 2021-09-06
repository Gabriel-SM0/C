#include <stdio.h>

int main()
{
    float n1,n2,n3;
    float media;
    printf("Insira as notas:\n");
    scanf("%f %f %f", &n1,&n2,&n3);
    media = (n1+n2+n3)/3;
    if (media>=6);
        printf("Aluno aprovado com media %f!",media);
    return 0;
}
