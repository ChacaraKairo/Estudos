#include <stdio.h>

int main() {
    // Sequência de escape ANSI para definir a cor do texto como verde (32)
    printf("\x1b[32m"); // \x1b é o código de escape

    // Imprime texto verde
    printf("Esta e uma mensagem verde.\n");

    // Restaura a cor padrão (branco) usando a sequência de escape ANSI (0)
    printf("\x1b[0m");

    // Imprime texto padrão
    printf("Esta e uma mensagem com a cor padrao.\n");

    return 0;
}
