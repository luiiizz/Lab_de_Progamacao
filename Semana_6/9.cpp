
/*  9. Crie uma sub-rotina que receba como par�metro um valor inteiro e positivo e retorne a
soma dos divisores desse valor.
*/


#include<iostream>
#include<locale.h>

using namespace std;

// Prot�tipo fun��o
int subr(int num);

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	cout << "Digite um valor: ";
	cin >> num;
	
	cout << subr(num);
	
	return 0;
}


int subr(int num){
	int soma=0;
	
	for(int i=1;i<=num;i++){
		if(num%i==0){
			soma += i;
		}
	}
	
	return soma;
}

