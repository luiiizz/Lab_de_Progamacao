/* 5. Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou
negativo.

*/


#include<iostream>
#include<locale.h>

using namespace std;

// Protótipo função
void subr(int a);

int main(){
	setlocale(LC_ALL,"");
	
	float num;
	
	cout << "Digite um número: ";
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

