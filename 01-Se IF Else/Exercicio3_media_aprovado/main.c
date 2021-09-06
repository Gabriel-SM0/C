#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    float media;
    printf("Insira as 3 notas dos alunos. \n");
    scanf("%f %f %f", &a,&b,&c);
    media=((a+b+c)/3);
    if (media >=6)
        printf("O aluno passou.\n");
        else
            printf("Nao rolou.\n");

    return 0;
}

