/*Saida: quantidade de asteriscos definidos pelo usuario;
entrada: um numero inteiro;
criar uma função para calcular a quantidade de asteriscos
que o programa deve imprimir.
*/
#include <stdio.h>

void asterisco(int n) {
	int i;
	for(i=0; i<n; i++){
		printf("*");
	}
	
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    asterisco(n);
    
    return 0;
}

