/* 2.      Fa�a um programa que preencha um vetor com sete n�meros inteiros, calcule e mostre:

os n�meros m�ltiplos de 2;
os n�meros m�ltiplos de 3;
os n�meros m�ltiplos de 2 e de 3.
*/ 

#include<iostream>
#include<locale.h>

using namespace std;

void imprimir_multiplos(int num[],int n);

int main(){
	setlocale(LC_ALL,"");
	
	int num[7];
	
	cout << "Digite 7 n�meros inteiros:\n ";
	
	for(int i=0; i<7;i++){
		cin >> num[i];	
		//cout << num[i];
	}
	cout << "\nM�ltiplo de 2:\n";
	imprimir_multiplos(num,2);
	
	cout << "\nM�ltiplo de 3:\n";
	imprimir_multiplos(num,3);
	
	cout << "\nM�ltiplo de 2 e :\n";
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
	
	
