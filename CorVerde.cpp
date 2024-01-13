#include <stdio.h>

int main() {
    // Sequ�ncia de escape ANSI para definir a cor do texto como verde (32)
    printf("\x1b[32m"); // \x1b � o c�digo de escape

    // Imprime texto verde
    printf("Esta e uma mensagem verde.\n");

    // Restaura a cor padr�o (branco) usando a sequ�ncia de escape ANSI (0)
    printf("\x1b[0m");

    // Imprime texto padr�o
    printf("Esta e uma mensagem com a cor padrao.\n");

    return 0;
}
