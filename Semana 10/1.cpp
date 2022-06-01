/*1.      Faça um programa que preencha um vetor com seis elementos numéricos inteiros, calcule mostre:

todos os números pares;
a quantidade de números pares;
todos os números ímpares;
a quantidade de números ímpares.
*/

#include<iostream>
#include<locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	int num[6], imp=0;
	
	cout << "Digite 6 números inteiros:\n ";
	
	for(int i=0; i<6;i++){
		cin >> num[i];	
		//cout << num[i];
	}
	cout << "\nPares:\n";
	for(int i=0; i<6;i++){
		if(num[i]%2 == 0){
			cout << num[i] << endl;
		}	
	}
	cout << "\nÍmpares: \n";
	for(int i=0; i<6;i++){
		if(num[i]%2 != 0){
			cout << num[i] <<endl;
			imp += 1;
		}
	}
	cout << "Quantidade de números ímpares: " << imp;
}

