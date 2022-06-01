/*Faça um programa que preencha uma matriz 10 x 10, com números inteiros. 
O Programa deverá mostrar a matriz preenchida, a matriz contendo somente os valores da DP - Diagonal Principal, 
a matriz contendo somente os valores da DS - Diagonal Secundária e uma matriz mostrando somente os valores das DP e DS. 
 
 Dev: Luiz Henrique
*/

#include<iostream>
#include<locale.h>
#include <cstdlib>
#include <ctime>


using namespace std;


int main(){
	setlocale(LC_ALL,"");
	
	
	int vetor1[10][10], maior=0;
	//int secun[3][3]
	cout << "Digite 100 valores para a Matriz: ";
	
	for(int i=0; i<100;i++){
		for(int j=0; j<3;j++){
		

    srand(seed);
			vetor1[i][j] = srand()%100
		}
	}
	cout <<"\n Matriz preeenchida: "<<endl;
	for(int i=0; i<100;i++){
		for(int j=0; j<100;j++){
			cout << vetor1[i][j] <<" " ;
		}
		cout <<endl;
	}
	
	cout <<"\n Diagonal Principal: "<<endl;
	for(int i=0; i<100;i++){
		for(int j=0; j<100;j++){
			if(i==j){
				cout << vetor1[i][j] <<" " ;
			}else
				cout << " ";
		
		}
		cout <<endl;
	}
	
	cout <<"\n Diagonal Secundária: "<<endl;
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			if(i==3-1-j)
				cout << vetor1[i][(3-1)-i];
			else
				cout <<" ";
		}
		cout <<endl;
	}
	cout <<"\n Valores de DP & DS:   "<<endl;
	for(int i=3-1; i>=0;i--){
		for(int j=0; j<3;j++){
			if(i==3-1-j)
				cout << vetor1[i][(3-1)-i] << " ";
			else if(i==j)
				cout << vetor1[i][j] <<" ";
			else
				cout <<" ";
		}
		cout <<endl;
	}
}
