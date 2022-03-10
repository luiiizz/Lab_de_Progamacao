#include<stdio.h>
#include<locale>
#include<math.h>
#include<string>

/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exercício: 3

3. Faça uma função que leia 5(cinco) valores inteiros e retorne o maior, o menor deles e a
média dos digitados.
*/

int time(int inicio[2], int termino[2]);

int main(){
	setlocale(LC_ALL,"");
	
	int inicio[2], termino[2];
	printf("\nDigite apenas a hora de início: ");
	scanf("%d", &inicio[0]);
	printf("\nDigite os minutos da hora de início: ");
	scanf("%d", &inicio[1]);
	
	printf("\nDigite apenas a hora de término: ");
	scanf("%d",termino[0]);
	printf("\nDigite os minutos da hora de início: ");
	printf("%d", termino[1]);
	
	system("pause");
	system("color a");
	printf("\nA duração do jogo foram: %d minutos", time(inicio,termino));
	return 0;
}

int time(int inicio[2], int termino[2]){
	int duracao=0;
	
	if (termino[0] > inicio[0])
		duracao = (termino[0]*60 + termino[1]) - (inicio[0]*60 + inicio[1]);
	else
		duracao = (1440 - (inicio[0]*60 + inicio[1])) + (termino[0]*60 + termino[1]);
	
	if (duracao < 1440)
		return duracao;
	else
		return 0;
		
}


