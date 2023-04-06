/*
saidas: mostrar o saldo, depositar, sacar ou sair do banco;
entradas: confirmação para mostrar o saldo, quantidade para depositar,
quantidade para sacar e confirmação para sair do banco;
criando 3 funçoes diferentes para simular um banco, o usuario escolhe
para qual direção o codigo deve ir.
*/
#include <stdio.h>
#include <locale.h>

float saldo(float conta){
	printf("\nO seu saldo é de %.2f\n\n", conta);
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
		printf("Não é posivel realizar o saque, tente denovo:\n");
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
				printf("\nOpção inexistente\n");
				break;
	
	    }
	}
	printf("Obriado, Volte sempre!");
	
	return 0;
}
