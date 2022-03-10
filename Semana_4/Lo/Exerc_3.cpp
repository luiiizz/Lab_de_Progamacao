#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exercício: 3

3. Faça uma função que leia 5(cinco) valores inteiros e retorne o maior, o menor deles e a
média dos digitados.
*/

int valores(int vetor[5]);


int main(){
	setlocale(LC_ALL,"");
	
	int vetor[5];
	
	printf("Digite 5 valores: ");
	for(int i=0; i<5; i++){
		scanf("%d", &vetor[i]);
	}
	
	valores(vetor);
	
	return 0;
}

int valores(int vetor[5]){
	int maior = 0, menor = vetor[0],  media = 0, soma = 0;
	for(int i=0; i<5; i++){
		if (vetor[i]>maior)
			maior = vetor[i];
		if (vetor[i]<menor)
			menor = vetor[i];
		soma += vetor[i];
	}
	media = soma/5;
	
	printf("\nO maior é: %d", maior);	
	printf("\nO menor é: %d", menor);
	printf("\nA média é: %d", media);
}
