#include<stdio.h>
#include<locale>
#include<math.h>
#include<string>

/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exercício: 5	

5. Crie uma função que receba como parâmetro um valor inteiro e positivo N, e retorne o
valor de S, obtido pelo seguinte cálculo:

*/

#include<iostream>
#include<locale>
#include<math.h>

using namespace std;

// Protótipo função
float calculoS(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n;
	
	printf("Digite um número para N: ");
	scanf("%d", &n);
	
	calculoS(n);
	return 0;
}

float calculoS(int n){
	int fat = 0, s=1;
	float f = 0;
	
	for(int j=1; j<=n; j++){
		fat = j;
		for(int i = j-1; i>=1 ;i--){
	
			fat *= i;
			f = 1/fat;
		}
		s += f;
	}
	printf("S: %d",s);
}
