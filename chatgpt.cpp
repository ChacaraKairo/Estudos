#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para a função sleep

int main() {
    int horas = 10;
    int minutos = 0;

    printf("Contagem Regressiva de 10:00 até 00:00\n");

    while (horas >= 0) {
        printf("%02d:%02d\n", horas, minutos);

        // Aguarda 1 minuto (60 segundos)
        sleep(60);

        // Reduz os minutos
        minutos--;

        // Verifica se os minutos chegaram a -1, o que indica que uma hora passou
        if (minutos < 0) {
            minutos = 59;
            horas--;
            
        }
    }

    printf("Contagem concluída!\n");

    return 0;
}
