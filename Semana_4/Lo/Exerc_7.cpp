#include<stdio.h>
#include<locale>
#include<math.h>
#include<string>
/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exercício: 7

/*	7. Faça uma função que receba como parâmetro um valor N(inteiro e maior ou igual a 1)
e determine o valor da sequencia S, descrita a seguir e retorne o valor para o programa
principal.

*/


#include<iostream>
#include<locale.h>
#include<math.h>
#include<cstdlib>

// Protótipo função
float somaS(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n = 0;
	
	while (n<1){
		printf("Digite um valor para N: ");
		scanf("%d", &n);
	}
	
	printf("Valor da sequencia S: %d", somaS(n));
	
	return EXIT_SUCCESS;
}

float somaS(int n){
	float s = 1;
	
	for(int j=2; j<=n; j++){
		s += 1/j;
	}
	
	return s;
}

