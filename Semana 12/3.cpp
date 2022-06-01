/*Faça um programa que preencha dois vetores de dez posições cada, 
determine e mostre um terceiro contendo os elementos dos dois vetores 
anteriores ordenados de maneira decrescente
*/

#include<iostream>
#include<locale>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	
	int vetor1[10];
	int vetor2[10];
	
	cout << "Digite 10 números inteiros(vetor1): ";
	for(int i=0;i<10;i++){
		cin >> vetor1[i];
	}
	cout << "Digite 10 números inteiros(vetor2): ";
	for(int i=0;i<10;i++){
		cin >> vetor2[i];
	}
	
	
	
}
		
