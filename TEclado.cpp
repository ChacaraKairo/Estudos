#include <stdio.h>
#include <conio.h>

int main() {
    char tecla;

    printf("Pressione uma tecla no teclado virtual (A, B, C, 1, 2, 3): ");

    while (1) {
        if (kbhit()) {  // Verifica se uma tecla foi pressionada
            tecla = getch();  // Obtém a tecla pressionada

            // Exibe a tecla pressionada
            printf("Tecla pressionada: %c\n", tecla);

            // Saída do programa quando a tecla 'q' for pressionada
            if (tecla == 'q' || tecla == 'Q') {
                break;
            }
        }
    }

    return 0;
}
