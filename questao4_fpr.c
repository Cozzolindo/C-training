/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 24/10/2022
	
	Quest�o 04 [2,5 pontos]:
	Fazer uma fun��o recursiva que, dado um n�mero inteiro e 
	positivo N, calcule a soma de seus algarismos.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int sumDigit(int n){
	if(n==0){
		return 0;
	}else{
		return (n%10+sumDigit(n/10));
	}
}

//main
void main ()
{
	//declara��o de vari�veis
	int numero, soma;
	
	//lendo o n�mero
	printf ("Entre com um numero inteiro positivo: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	soma = sumDigit(numero);
	
	//exibindo o resultado
	printf ("\n\nSoma dos algarismos do numero %d: %d", numero, soma);
}
	

