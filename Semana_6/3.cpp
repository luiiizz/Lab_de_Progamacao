/* 3. Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o
primeiro número for divisível pelo segundo número. Caso contrário, deverá retornar o
próximo divisor.
*/


#include<iostream>
#include<locale.h>

using namespace std;

// Protótipo função
int subr(int a, int b);

int main(){
	setlocale(LC_ALL,"");
	int a,b;
	
	cout << "Digite dois números: ";
	cin >> a;
	cin >> b;
	
	cout << subr(a,b);
	
}

int subr(int a, int b){
	if (a%b==0){
		return 0;
	}
	else{
		for(int i=1;i<a;i++){
			if (a%i==0){
				if(i>b){
					return i;
				}
			}
		}
	}
}

