#include <stdio.h>

int diff(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = diff(num1, num2);
    printf("A diferenca entre %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}
