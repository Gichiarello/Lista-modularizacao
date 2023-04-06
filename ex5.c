/*saida: confirmação se a letra esta entre o determinado local;
entrada: uma letra;
criar uma função que calcula se tal letra esta ou não dentro de um determinado local.
*/
#include <stdio.h>
#include <locale.h>

int ascii(char c){
	if (c>='a'&& c<='z'){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);
    
    if (ascii(c)) {
        printf("O caractere '%c' esta entre 'a' e 'z'.\n", c);
    } else {
        printf("O caractere '%c' nao esta entre 'a' e 'z'.\n", c);
    }
    
    return 0;
}

