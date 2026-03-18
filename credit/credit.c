#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
	char numero_cartao[100];
	int digito = 0;

	printf("Digite o numero do cartao: " );

	fgets(numero_cartao, sizeof(numero_cartao), stdin);

	numero_cartao[strcspn(numero_cartao, "\n")] = 0;

	while(numero_cartao[digito] != '\0'){
		
		if(isdigit(numero_cartao[digito])){
			digito++;
		}
		else{
			printf("Por favor digite apenas numeros, tente novamente. \n");
			printf("Caracter encontrado na posicao: %d", digito + 1); 
			return 0;
		}	

	}

	if(digito == 0) printf("O campo nao pode ser vazio, tente novamente.\n");

	// Valida Cartão 
	if(digito < 15) printf("INVALID.\n");

	if(digito == 15){
	       printf("AMEX\n");
	}
	else if (digito == 16){
		printf("MASTERCARD\n");
	}	
	else if (digito == 13 || digito == 16){
		printf("VISA\n");
	}

	//Transformar em int os digitos

	//Multiply every other digit by 2, starting with the number’s second-to-last digit
	
	// add those products’ digits together.	
	
	// Add the sum to the sum of the digits that weren’t multiplied by 2.
	
	// if the total modulo 10 is congruent to 0), the number is valid!

	return 0;
}
