/* 2.      Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:

os números múltiplos de 2;
os números múltiplos de 3;
os números múltiplos de 2 e de 3.
*/ 

#include<iostream>
#include<locale.h>

using namespace std;

void imprimir_multiplos(int num[],int n);

int main(){
	setlocale(LC_ALL,"");
	
	int num[7];
	
	cout << "Digite 7 números inteiros:\n ";
	
	for(int i=0; i<7;i++){
		cin >> num[i];	
		//cout << num[i];
	}
	cout << "\nMúltiplo de 2:\n";
	imprimir_multiplos(num,2);
	
	cout << "\nMúltiplo de 3:\n";
	imprimir_multiplos(num,3);
	
	cout << "\nMúltiplo de 2 e :\n";
	imprimir_multiplos(num,2);
	imprimir_multiplos(num,3);
}

void imprimir_multiplos(int num[],int n){
	for(int i=0; i<6;i++){
		if(num[i]%n == 0){
			cout << num[i] << endl;
		}
	}
}
	
	
