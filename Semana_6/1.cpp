/*1. Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e
retorne a soma dos números inteiros existentes entre o número 1 e N (inclusive).
*/

#include<iostream>
#include<locale.h>
#include<math.h>
#include<cstdlib>

using namespace std;

// Protótipo função
int subr(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n;
	
	cout<<"Digite um valor para N: ";
	cin >> n;
	cout << subr(n);
}


int subr(int n){
	int soma=0;
	
	for(int i=1;i<=n;i++){
		soma+=i;
		//cout << i;
	}
	return soma;
}
