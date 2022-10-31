/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 24/10/2022
	
	Quest�o 01 [2,5 pontos]:
	Dada uma matriz MLxC, onde L e C s�o constantes, desenvolver 
	uma fun��o que verifique se os elementos da matriz est�o 
	ordenados de forma crescente. Para isto, as seguintes regras 
	devem ser atendidas:

	a.	Os elementos de cada linha devem estar ordenados 
	    crescentemente (ou seja, cada elemento ser� maior ou 
		igual �quele da mesma linha, por�m da coluna anterior - 
		caso exista);
	b.	O primeiro elemento de cada linha deve ser maior ou igual 
	    ao �ltimo da linha anterior (caso exista).

	Caso a matriz M atenda aos crit�rios definidos, o valor 1 
	dever� ser retornado pela fun��o; caso contr�rio, 0.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 8
#define C 4

//prot�tipos das fun��es
int isSorted(int matrix[L][C]){
	int i,j;
	int array[L*C];
	for( i = 0; i<L; i++){
		for(j = 0; j<C;j++){
			array[i*C+j] = matrix[i][j];
		}
	}
	for(i = 1; i<L*C; i++){
		if(array[i-1]>array[i]){
			return 0;
		}else{
		return 1;
		}
	}
}

void exibirMatriz (int M[L][C]);

//main
void main ()
{
	//declara��o de vari�veis
	int matriz1[L][C] = {{ 1,  2,  3,  4},
	                     { 5,  6,  7,  8},
	                     { 8,  8,  9,  9},
	                     { 9, 10, 11, 12},
	                     {13, 13, 14, 15},
	                     {18, 19, 21, 22},
	                     {22, 23, 23, 24},
	                     {25, 28, 28, 30}};

	int matriz2[L][C] = {{ 1,  2,  3,  4},
	                     { 5,  6,  7,  8},
	                     { 8,  8,  9,  9},
	                     { 8, 10, 11, 12},
	                     {13, 13, 14, 15},
	                     {18, 19, 21, 22},
	                     {22, 23, 23, 24},
	                     {25, 28, 28, 30}};
	int value;

	//------------ Testando a matriz 1

	//exibindo a matriz 1 antes da chamada � fun��o
	exibirMatriz (matriz1);
	
	//chamando a fun��o e exibindo se a matriz 1 atende ou n�o aos crit�rios
	
	value = isSorted(matriz1);
	printf("%d\n", value);
	//------------ Testando a matriz 2

	//exibindo a matriz 2 antes da chamada � fun��o
	exibirMatriz (matriz2);
	
	//chamando a fun��o e exibindo se a matriz 2 atende ou n�o aos crit�rios
	value = isSorted(matriz2);
	printf("%d\n", value);
}
	
//implementa��o das fun��es


void exibirMatriz (int M[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("Elementos da matriz:\n\n");
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			printf ("%3d ", M[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
