
#include <stdio.h>

int main() {
    // Sequ�ncia de escape ANSI para definir o fundo como azul (44) e o texto como branco (37)
    printf("\x1b[44;37m");

    // Imprime texto com fundo azul e texto branco
    printf("Esta e uma mensagem com fundo azul e texto branco.\n");

    // Restaura as cores padr�o usando a sequ�ncia de escape ANSI (0)
    printf("\x1b[0m");

    // Imprime texto com cores padr�o
    printf("Esta e uma mensagem com as cores padrao.\n");

    return 0;
}
