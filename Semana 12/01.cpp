/*
Faça um programa que leia um vetor com quinze posições para números inteiros. 
Depois da leitura, divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.

Dev: Luiz Henrique Bispo
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	float vet1[15];
//	int vet2[15];
	float maior=0;
	
	
	for(int i=0; i<15;i++){
		
		printf("Digite o valor para %d: ",i+1);
		scanf("%f",&vet1[i]);	
	}	
	
	maior=vet1[0];
	for(int i=0;i<15;i++){
		
		if(vet1[i]>maior)
			maior=vet1[i];
	}

	printf("O maior valor foi: %.2f", maior);
	
	for(int i=0;i<15;i++){
		
		printf("\n%.0f/%.0f= %.3f",vet1[i],maior,(vet1[i]/maior));
	}
	
}
