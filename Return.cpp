#include <stdio.h>

int soma(int a, int b) {
    int resultado = a + b;
    return resultado; // Retorna o resultado da soma para a fun��o chamadora.
}

int main() {
    int x = 5;
    int y = 3;
    
    int resultadoSoma = soma(x, y); // Chama a fun��o 'soma' e armazena o resultado retornado.
    
    printf("A soma de %d e %d � igual a %d\n", x, y, resultadoSoma);
    
    return 0; // Encerra o programa.
}
