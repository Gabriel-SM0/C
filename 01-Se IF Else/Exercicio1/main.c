#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //inclui a bilioteca para mudar para portugues as interações com o usuário

int main()
{
    setlocale(LC_ALL,"portuguese");//usa o idioma de português
    printf("Olá mundo!\n");//mostra essa mensagem na tela
    return 0;
}
