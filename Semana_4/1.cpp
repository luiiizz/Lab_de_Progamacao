/* 1. Fa�a uma fun��o que receba 3 n�meros inteiros por par�metro: a,b e c, onde a � deve
ser maior que 1. A fun��o deve somar todos os inteiros entre b e c que sejam divis�veis
por a (inclusive b e c) e retornar o resultado para a fun��o principal.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>
#include<math.h>

// Declarando das fun��es

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
	cout << "\nSoma de todos os inteiros entre b e c que sejam divis�veis por a: " << num(a,b,c); 
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
		cout < "N�mero menor que 1";
	}
	return soma;
}
