#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //inclui a bilioteca para mudar para portugues as intera��es com o usu�rio

int main()
{
    setlocale(LC_ALL,"portuguese");//usa o idioma de portugu�s
    printf("Ol� mundo!\n");//mostra essa mensagem na tela
    return 0;
}
