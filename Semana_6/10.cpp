/*  10. Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne Xz
sem utilizar funções ou operadores de potência prontos.
*/


#include<iostream>
#include<locale.h>

using namespace std;

// Protótipo função
int subr(int x, int z);

int main(){
	setlocale(LC_ALL,"");
	int x,z;
	cout << "Digite dois valores: (X & z)";
	cin >> x;
	cin >> z;
	cout << "\nX elevado a z: ";
	cout << subr(x,z);
}


int subr(int x, int z){
	int resultado=0, i;
	
	while(i<z){
		resultado = resultado + (x*x);
	}
	
	return resultado;
}


