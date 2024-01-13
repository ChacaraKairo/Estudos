#include <stdio.h>

void decToHexBinOct(int num) {
    printf("Decimal: %d\n", num);
    printf("Hexadecimal: %X\n", num);
    printf("Binário: ");
    
    int binario[32];
    int indice = 0;
    int originalNum = num;

    while (num > 0) {
        binario[indice] = num % 2;
        num /= 2;
        indice++;
    }
    
    for (int i = indice - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
    
    printf("\nOctal: ");
    
    int octal[32];
    indice = 0;
    num = originalNum;
    
    while (num > 0) {
        octal[indice] = num % 8;
        num /= 8;
        indice++;
    }
    
    for (int i = indice - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    
    printf("\n");
}

int main() {
    int numero;
    char resposta;

    do {
        printf("Digite um número decimal: ");
        scanf("%d", &numero);
        
        decToHexBinOct(numero);
        
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's' || resposta == 'S');

    return 0;
}
