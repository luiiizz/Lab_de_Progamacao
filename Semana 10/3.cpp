/* 3.      Fa�a um programa que preencha um vetor com quinze elementos inteiros e 
verifique a exist�ncia de elementos iguais a 30, mostrando as posi��es em que apareceram.

*/ 

#include<iostream>
#include<locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	
	int num[15], contar = 0;
	
	cout << "Digite 15 n�meros inteiros:\n ";
	
	for(int i=0; i<15;i++){
		cin >> num[i];	
	}
	
	cout << "\nIdentifica��o de elementos iguais a 30: \n";
	for(int i=0; i<15;i++){
		
		if (num[i] == 30){
			cout << "Posi��o: " << i << "=" << num[i] << endl;
			contar += 1;
		}
	}
	cout << "Aparece " << contar << "vezes";
}
	

