/* 3.      Faça um programa que preencha um vetor com quinze elementos inteiros e 
verifique a existência de elementos iguais a 30, mostrando as posições em que apareceram.

*/ 

#include<iostream>
#include<locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	
	int num[15], contar = 0;
	
	cout << "Digite 15 números inteiros:\n ";
	
	for(int i=0; i<15;i++){
		cin >> num[i];	
	}
	
	cout << "\nIdentificação de elementos iguais a 30: \n";
	for(int i=0; i<15;i++){
		
		if (num[i] == 30){
			cout << "Posição: " << i << "=" << num[i] << endl;
			contar += 1;
		}
	}
	cout << "Aparece " << contar << "vezes";
}
	

