#include <stdio.h>

float area(float raio, float pi){
	float x;
	x = pi*raio*raio;
	return x;
}
void main(){
	float res, raio, pi=3.14;
	printf("Insira o valor do raio de um circulo:\n");
	scanf("%f", &raio);
	res = area(raio, pi);
	printf("\nArea do circulo = %.2f", res);
	return 0;
}

