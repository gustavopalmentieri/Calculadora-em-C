#include <stdio.h>
int main () {
	
	int escolher;
	int soma, subtracao, multiplicacao, divisao;
	int n1, n2;
	
	printf ("----------- Calculadora -----------\n");
	
	printf ("\n-------- Escolha a Operacao --------\n");
	
	printf (" \n+ ------------------------- +\n");
	printf (" \n1 - Soma\n");
	printf (" \n2 - Subtracao\n");
	printf (" \n3 - Multiplicacao\n");
	printf (" \n4 - Divisao\n");
	printf ("\n+ ------------------------- +\n");
	
	printf ("\nDigite a operacao desejada: ");
	scanf ("%d", &escolher);
	
	if (escolher ==  1){
		
		printf ("\n-------- Faca sua Soma!! ---------\n");
		printf (" \n------> Exemplo: 0 + 0 <---------\n");
		printf ("\nDigite os Valores: ");
		scanf ("%d + %d", &n1, &n2);
		soma = n1 + n2;
		printf ("Seu Resultado: %d + %d = %d ", n1, n2, soma);
		
	} else if (escolher == 2){
		
		printf ("\n-------- Faca sua Subtracao!! ---------\n");
		printf (" \n------> Exemplo: 0 - 0 <---------\n");
		printf ("\nDigite os Valores: ");
		scanf ("%d - %d", &n1, &n2);
		subtracao = n1 - n2;
		printf ("Seu Resultado: %d - %d = %d", n1, n2, subtracao);
		
	} else if (escolher == 3){
		
		printf ("\n-------- Faca sua Multiplicacao!! ---------\n");
		printf (" \n------> Exemplo: 0 * 0 <---------\n");
		printf ("\nDigite os Valores: ");
		scanf ("%d * %d", &n1, &n2);
		multiplicacao = n1 * n2;
		printf ("Seu Resultado: %d * %d = %d", n1, n2, multiplicacao);
		
	} else if (escolher == 4){
		
	printf ("\n-------- Faca sua Divisao!! ---------\n");
	printf (" \n------> Exemplo: 0 / 0 <---------\n");
	printf ("\nDigite os Valores: ");
	scanf ("%d / %d", &n1, &n2);
	divisao = n1 / n2;
	printf ("Seu Resultado: %d / %d = %d ", n1, n2, divisao);
	
	} else{
		printf ("Voce nao seguiu o formato desejedo pela calculadora :(\n");
	}
	
	return 0;
}
