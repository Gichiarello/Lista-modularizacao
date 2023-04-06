/*
Saida: a divisão;
entrada: dois numeros inteiros;
criar uma função onde divida dois numeros inseridos pelo usuario, o divisor nao pode ser igual a zero;
*/
#include <stdio.h>

float div(int x, int y){
	while(x==0){
		printf("\nNao e possivel realizar a conta com o divisor sendo 0, insira outro numero:");
		scanf("%d", &x);
	}
	return x*1.0/y;
}
void main(){
	int x, y; 
	float res;
	printf("Insira 2 numeros para realizar a divisao:\n");
	scanf("%d", &x);
	scanf("%d", &y);
	res = div(x, y);
	printf("\ndivisao = %0.2f", res);
	return 0;
}
