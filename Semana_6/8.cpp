/*  8. Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
*/


#include<iostream>
#include<locale.h>

using namespace std;

// Protótipo função
int subr(int num);

int main(){
	setlocale(LC_ALL,"");
	int num;
	
	cout << "Digite um valor inteiro e positivo: ";
	cin >> num;
	
	cout << "\nFatorial: " << subr(num);
}

int subr(int num){
	int fat=1;
	for(int i=1;i<=num;i++){
		fat *= i;
	}
	
	return fat;
}


