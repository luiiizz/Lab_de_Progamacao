/*  7. Elabore uma sub-rotina que leia um n�mero n�o determinado de valores positivos e
retorne a m�dia aritm�tica desses valores. Terminar a entrada de dados com o valor
zero.

*/


#include<iostream>
#include<locale.h>

using namespace std;

// Prot�tipo fun��o
int subr();

int main(){
	setlocale(LC_ALL,"");
		
		
	cout << "\nM�dia dos n�meros: " << subr();

	return 0;
}

int subr(){
	int num, soma=0, cont=0, resultado=0;
	cout << "Digite valores: (digite 0 para finalizar)";
	while(num!=0){
		cin >> num;
		if(num!=0){
			soma += num;
			cont +=1;
		}
	}
	
	resultado = soma/cont;
	
	return resultado;
}
