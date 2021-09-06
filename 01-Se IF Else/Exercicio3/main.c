#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d;
    float q;
    float c;
    printf("Informe a distancia percorrida (km):\n");
    scanf ("%f",&d);
    printf("Informe a quantidade de combustivel consumida (l):\n");
    scanf("%f",&q);
    c=q/d;
    printf("O consumo foi de %f litros por quilometros",c);
    return 0;
}
