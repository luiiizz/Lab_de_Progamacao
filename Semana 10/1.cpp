/*1.      Fa�a um programa que preencha um vetor com seis elementos num�ricos inteiros, calcule mostre:

todos os n�meros pares;
a quantidade de n�meros pares;
todos os n�meros �mpares;
a quantidade de n�meros �mpares.
*/

#include<iostream>
#include<locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	int num[6], imp=0;
	
	cout << "Digite 6 n�meros inteiros:\n ";
	
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
	cout << "\n�mpares: \n";
	for(int i=0; i<6;i++){
		if(num[i]%2 != 0){
			cout << num[i] <<endl;
			imp += 1;
		}
	}
	cout << "Quantidade de n�meros �mpares: " << imp;
}

