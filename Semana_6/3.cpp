/* 3. Elabore uma sub-rotina que receba dois n�meros como par�metros e retorne 0, se o
primeiro n�mero for divis�vel pelo segundo n�mero. Caso contr�rio, dever� retornar o
pr�ximo divisor.
*/


#include<iostream>
#include<locale.h>

using namespace std;

// Prot�tipo fun��o
int subr(int a, int b);

int main(){
	setlocale(LC_ALL,"");
	int a,b;
	
	cout << "Digite dois n�meros: ";
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

