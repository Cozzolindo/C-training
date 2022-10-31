/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 24/10/2022
	
	Quest�o 03 [2,5 pontos]:
	Considere a exist�ncia de um vetor de structs com quant 
	posi��es, onde cada uma destas armazena os seguintes dados 
	sobre os funcion�rios de uma empresa: matricula (int), 
	nome (string), g�nero (char) e sal�rio (float). 
	Pede-se uma fun��o que, dado um g�nero, desloque todos os 
	funcion�rios deste g�nero para o in�cio do vetor 
	(e, consequentemente, os funcion�rios do outro g�nero 
	ficar�o ao final do conjunto). 
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//defini��o de tipos
typedef struct {
	int 	matricula;
	char	nome[20];
	char	genero;
	float 	salario; 	
} TFuncionario;

//prot�tipos das fun��es

void sortStruct(TFuncionario vetor[], int quant, char gen){
	int i, j;
	TFuncionario temp;
	for(i = 0; i<quant;i++){
		for(j=0;j<(quant-1-i);j++){

			if(vetor[j].genero != gen){
				temp = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temp;
			}
		}
	}
}
void exibirFuncionarios (TFuncionario vetor[], int quant);

//main
void main ()
{
	//declara��o de vari�veis
	TFuncionario vetor[5];
	int quantidade = 5;
	char genero;
	
	//inicializando o vetor de structs
	vetor[0].matricula = 1234;
	strcpy (vetor[0].nome, "MARIA");
	vetor[0].genero = 'F';
	vetor[0].salario = 5000;
	
	vetor[1].matricula = 2345;
	strcpy (vetor[1].nome, "JOSE");
	vetor[1].genero = 'M';
	vetor[1].salario = 3000;
	
	vetor[2].matricula = 3456;
	strcpy (vetor[2].nome, "JOAO");
	vetor[2].genero = 'M';
	vetor[2].salario = 6000;

	vetor[3].matricula = 4567;
	strcpy (vetor[3].nome, "ANA");
	vetor[3].genero = 'F';
	vetor[3].salario = 8000;	

	vetor[4].matricula = 5678;
	strcpy (vetor[4].nome, "PEDRO");
	vetor[4].genero = 'M';
	vetor[4].salario = 7000;

	//exibindo o vetor antes da chamada � fun��o
	exibirFuncionarios (vetor, quantidade);

	//lendo o genero
	printf ("Entre com o genero desejado: ");
	fflush (stdin);
	scanf ("%c", &genero);
	
	//chamando a fun��o
	
	sortStruct(vetor,quantidade,genero);
	
	//exibindo o vetor depois da chamada � fun��o
	exibirFuncionarios (vetor, quantidade);	
}
	
//implementa��o das fun��es


void exibirFuncionarios (TFuncionario vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//pulando linha
	printf ("\n\n");
	
	//percorrendo o vetor
	for (i=0;i<quant;i++)
	{
		printf ("Matricula: %d\n", vetor[i].matricula);
		printf ("Nome: %s\n", vetor[i].nome);
		printf ("Genero: %c\n", vetor[i].genero);
		printf ("Salario: R$ %.2f\n\n", vetor[i].salario);
	}
}
