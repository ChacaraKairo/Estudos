
#include <stdio.h>

int main() {
    // Sequência de escape ANSI para definir o fundo como azul (44) e o texto como branco (37)
    printf("\x1b[44;37m");

    // Imprime texto com fundo azul e texto branco
    printf("Esta e uma mensagem com fundo azul e texto branco.\n");

    // Restaura as cores padrão usando a sequência de escape ANSI (0)
    printf("\x1b[0m");

    // Imprime texto com cores padrão
    printf("Esta e uma mensagem com as cores padrao.\n");

    return 0;
}
