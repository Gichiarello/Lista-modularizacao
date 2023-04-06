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

