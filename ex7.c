/*Giovanni Chiarello 31/05
saida: calculo do cubo de um numero;
entrada: um numero;
criar uma função que calcule o cubo de um numero
*/
#include <stdio.h>

float cubo(int x) {
	return x*x*x;
	
}

int main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    
    printf("%.2f", cubo(x));
    
    return 0;
}

