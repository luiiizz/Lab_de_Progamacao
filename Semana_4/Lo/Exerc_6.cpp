#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exercício: 6

6. Faça uma função que receba como parâmetro um valor inteiro e positivo N, indicando
a quantidade de parcelas de uma soma S, calculada pela formula abaixo e retorne o
valor para o programa principal.
*/


// Protótipo função
float op(int num);

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	printf("Digite a quantidade de parcelas (N): ");
	scanf("%d",&num);
	
	printf("\nValor de S: %.2f", op(num));
	
	return 0;
}

float op(int num){
	float n1 = 0, n2 = 0;
	
	for(int j=1; j<=num; j++){w
	
		
		n1 = (pow(j,2) + 1)/(j+3);
	
		n2 += n1;
	}
	
	return n2;
}

