/* 1. Faça uma função que receba 3 números inteiros por parâmetro: a,b e c, onde a é deve
ser maior que 1. A função deve somar todos os inteiros entre b e c que sejam divisíveis
por a (inclusive b e c) e retornar o resultado para a função principal.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>
#include<math.h>

// Declarando das funções

int num(int a,int b,int c);

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int a,b,c;
	
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;
	
	system("color b");
	cout << "\nSoma de todos os inteiros entre b e c que sejam divisíveis por a: " << num(a,b,c); 
	return 0;
}

int num(int a,int b,int c){
	int soma=0;
		
	if (a>1){
		for(int i=b;i<=c;i++){
			if (i%a==0){
				soma += i;
			}
		}
	}else{
		cout < "Número menor que 1";
	}
	return soma;
}
