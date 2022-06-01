/*Faça um programa que receba dez números inteiros e armazene-os em um vetor. 
Calcule e mostre dois vetores resultantes: 
o primeiro com os números pares e o segundo, com os números ímpares.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	
	int vetor[10];
	int par [10];
	int impar[10];
	
	cout << "Digite 10 números inteiros: ";
	for(int i=0;i<10;i++){
		par[i] = 0;
		impar[i] = 0;
	
	}
	for(int i=0;i<10;i++){
		cin >> vetor[i];
	}
	for(int i=0;i<10;i++){
		if(vetor[i]%2==0){
			par[i] = vetor[i];
		}else{
			impar[i] = vetor[i];
		}
	}
	
	cout << "\nPares: ";
	for(int i=0;i<10;i++){
		if (par[i] != 0){
			cout << par[i] << endl;
		}
		
	}
	cout << "\nImpares: ";
	for(int i=0;i<10;i++){
		if (impar[i] != 0){
			cout << impar[i] << endl;
		}
		
	}
	return 0;	
}


