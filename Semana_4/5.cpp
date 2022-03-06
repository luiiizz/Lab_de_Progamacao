/*	5. Crie uma fun��o que receba como par�metro um valor inteiro e positivo N, e retorne o
valor de S, obtido pelo seguinte c�lculo:

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>
#include<math.h>

using namespace std;

// Prot�tipo fun��o
float calculoS(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n;
	
	cout << "Digite um n�mero para N: ";
	cin >> n;
	
	calculoS(n);
	return 0;
}

float calculoS(int n){
	int fat = 0, s=1;
	float f = 0;
	
	for(int j=1; j<=n; j++){
		fat = j;
		for(int i = j-1; i>=1 ;i--){
			//cout << i << endl;
			fat *= i;
			f = 1/fat;
		}
		s += f;
	}
	cout <<endl<< "S: "<<s;
}
