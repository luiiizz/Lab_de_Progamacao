// Dev: Luiz Henrique Bispo Barreira - 2110105

#include<iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int num,l,c;
	int linha, coluna, soma;
	
	cout << "Digite um número para a matriz quadrada: ";
	cin >> num;
	l = num;
	c = num;
	
	int matriz[l][c];
	
	cout << "Preencha a matriz com " <<  c*l << " valores: \n";
	for(int i=0; i<l;i++){
		for(int j=0;j<c;j++){
			cin >> matriz[i][j];
		}
	}
	
	cout << "\nMatriz: \n";
	for(int i=0; i<num;i++){
		for(int j=0; j<num;j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\nSecundária: \n";
	
	for(int i=0; i<num;i++){
		for(int j=0; j<num;j++){
			if(i==num -1 -j){
				cout << matriz[i][(3-1)-i];
			}else
				cout << " ";
			if(j>=num-i){
				soma += matriz[i][j];
			}
		}
		cout << endl;
	}
	
	cout <<"\nSoma do elementos abaixo da diagonal secundária: " << soma;
	return 0;
}
