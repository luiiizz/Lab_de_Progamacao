/* 5. Fa�a uma sub-rotina que receba um valor inteiro e verifique se ele � positivo ou
negativo.

*/


#include<iostream>
#include<locale.h>

using namespace std;

// Prot�tipo fun��o
void subr(int a);

int main(){
	setlocale(LC_ALL,"");
	
	float num;
	
	cout << "Digite um n�mero: ";
	cin >> num;
	
	subr(num);
	
	return 0;
}

void subr(int a){
	if(a>=0)
		cout << "Positivo";	
	else
		cout << "Negativo";
}

