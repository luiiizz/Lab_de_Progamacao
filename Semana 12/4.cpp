/*Faça um programa que preencha uma matriz M (2 x 2), calcule e mostre a matriz R,
 resultante da multiplicação dos elementos de M pelo seu maior elemento.
 
 Dev: Luiz Henrique
*/

#include<iostream>
#include<locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	
	int vetor1[2][2], maior=0, r[2][2];
	
	cout << "Digite 4 valores para a Matriz: ";
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			cin >> vetor1[i][j];
		}
	}
	
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			if (vetor1[i][j] > maior){
				maior = vetor1[i][j];
			}
		}
	}
	
	cout << "\nMatriz R: \n";
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			r[i][j] = (vetor1[i][j]*maior);
			cout << r[i][j] << " ";
		}
		cout<<endl;
	}
	return 0;	
}



