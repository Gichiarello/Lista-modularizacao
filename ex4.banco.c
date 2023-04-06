#include <stdio.h>
#include <locale.h>

float saldo(float conta){
	printf("\nO seu saldo � de %.2f\n\n", conta);
}
float deposito(){
	float din;
	printf("\nDigite a quantidade que queira depositar:\n");
	scanf("%f", &din);
	printf("\nDepositado com sucesso");
	return din;
}
float saque(float conta){
	float sac;
	printf("\nDigite a quantidade que queira sacar:\n");
	scanf("%f", &sac);
	while(sac<=0||sac>conta){
		printf("N�o � posivel realizar o saque, tente denovo:\n");
		scanf("%f", sac);
	}
	printf("\nSaque realizado com sucesso");
	return sac;
}
void main(){
	setlocale (LC_ALL,"portuguese");
	float conta = 0;
	int option = 0;
	
	while(option>-1){
		printf("\n\nBem vindo, selecione o que deseja fazer:\nsaldo:1\ndepositar:2\nsacar:3\nencerrar:4\n");
		scanf("%d", &option);
	    switch (option){
		    case 1:
			    saldo(conta);
			    break;
			case 2:
				conta+=deposito();
				saldo(conta);
				break;
			case 3:
				conta-=saque(conta);
				saldo(conta);
				break;
			case 4:
				option=-1;
				break;
			default:
				printf("\nOp��o inexistente\n");
				break;
	
	    }
	}
	printf("Obriado, Volte sempre!");
	
	return 0;
}
