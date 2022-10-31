/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 24/10/2022
	
	Quest�o 02 [2,5 pontos]:
	Dadas duas strings s1 e s2, implementar uma fun��o que 
	verifique se s1 � uma substring de s2 (retornando 1 caso 
	seja ou 0, se n�o for).
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//prot�tipos das fun��es
bool isValid(char s1[], char s2[]){
	char* p;
	if(p = strstr(s2,s1)){
		return true;
	}else{
		return false;
	}
}

//main
void main ()
{
	//declara��o de vari�veis
	char string1[20], string2[20];
	
	//lendo as strings
	printf ("Entre com a primeira string: ");
	fflush (stdin);
	gets (string1);
	
	printf ("Entre com a segunda string: ");
	fflush (stdin);
	gets (string2);

	//chamando a fun��o e exibindo se a string 1 � ou n�o uma 
	//substring da string 2
	if(isValid(string1,string2)==true){
		printf("1");
	}else{
		printf("0");
	}
}
	
//implementa��o das fun��es

