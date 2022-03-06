/* 3. Faça uma função que leia 5(cinco) valores inteiros e retorne o maior, o menor deles e a
média dos digitados.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>

// Declarando das funções

int valores(int vetor[5]);

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[5];
	
	cout << "Digite 5 valores: ";
	for(int i=0; i<5; i++){
		cin >> vetor[i];
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
	
	cout << "\nO maior é: " << maior;	
	cout << "\nO menor é: " << menor;
	cout << "\nA média é: " << media;
}
