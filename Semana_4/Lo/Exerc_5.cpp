#include<stdio.h>
#include<locale>
#include<math.h>
#include<string>

/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exerc�cio: 5	

5. Crie uma fun��o que receba como par�metro um valor inteiro e positivo N, e retorne o
valor de S, obtido pelo seguinte c�lculo:

*/

#include<iostream>
#include<locale>
#include<math.h>

using namespace std;

// Prot�tipo fun��o
float calculoS(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n;
	
	printf("Digite um n�mero para N: ");
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
