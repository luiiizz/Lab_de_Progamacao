/*	7. Faça uma função que receba como parâmetro um valor N(inteiro e maior ou igual a 1)
e determine o valor da sequencia S, descrita a seguir e retorne o valor para o programa
principal:

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale.h>
#include<math.h>
#include<cstdlib>

using namespace std;

// Protótipo função
float somaS(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n = 0;
	
	while (n<1){
		cout << "Digite um valor para N: ";
		cin >> n;
	}
	
	cout << "Valor da sequencia S: " << somaS(n);
	
	return EXIT_SUCCESS;
}

float somaS(int n){
	float s = 1;
	
	for(int j=2; j<=n; j++){
		s += 1/j;
	}
	
	return s;
}

