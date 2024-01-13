#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isTrue = true;
    bool isFalse = false;

    if (isTrue && !isFalse) {
        printf("Verdadeiro!\n");
    } else {
        printf("Falso!\n");
    }

    return 0;
}

