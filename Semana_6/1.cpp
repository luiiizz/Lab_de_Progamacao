/*1. Fa�a uma sub-rotina que receba um n�mero inteiro e positivo N como par�metro e
retorne a soma dos n�meros inteiros existentes entre o n�mero 1 e N (inclusive).
*/

#include<iostream>
#include<locale.h>
#include<math.h>
#include<cstdlib>

using namespace std;

// Prot�tipo fun��o
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
