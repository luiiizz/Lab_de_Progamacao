/* 4. Fa�a um programa que preencha um vetor com 100 n�meros inteiros. Calcule e mostre:

O vetor preenchido 
Os n�meros primos e suas posi��es
Quantos n�meros s�o menores que a soma dos primos
*/ 

#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main(){
	setlocale(LC_ALL,"");
	
	
	int num[100], aux = 0, div = 0, soma_primos;
	srand(time(NULL));
	
	//for(int i=0; i<100;i++){
		//cin << num[i];
	
	
	cout << "Vetor [";
	for(int i=0; i<100;i++){
		num[i] = rand() % 100;
		if (i==99){
			cout << num[i];
		}else
			cout << num[i]<< ", ";
		
	}
	cout << "]";
	

	for(int i=0; i<100;i++){
		div = 0;
		for(aux=2 ; aux<=num[i]/2 ; aux++)
   			if(num[i]%aux==0)
           		div++;
   	    if(div==0){
     	  	cout<<"\nPosi��o: " << i << " N�mero Primo : "<< num[i] <<endl;
     	  	soma_primos += soma_primos;
		}
	}
	//for(int i=0; i<100;i++){
		
	
 
	cout << "]";
}
	

