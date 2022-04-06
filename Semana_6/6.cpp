/* 6. Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa
e retorne seu peso ideal. Para homens, deverá calcular o peso ideal usando a fórmula:
peso ideal = 72.7 *alt - 58; para mulheres: peso ideal = 62.1 *alt - 44.7. 7.


*/


#include<iostream>
#include<locale.h>

using namespace std;

// Protótipo função
float subr(float alt, float sexo);

int main(){
	setlocale(LC_ALL,"");
	
	float alt, sexo;
	
	cout << "Digite a  altura: ";
	cin >> alt;
	cout << "Digite '0' para Homem e '1' para Mulher: ";
	cin >> alt;
	
	cout << subr(alt, sexo)*-1;
}

float subr(float alt, float sexo){
	float peso_ideal = 0;
	
	if(sexo == 0){
		peso_ideal = 72.7 * alt -58;	
	}
	else{
		peso_ideal = 62.1 *alt - 44.7;
	}

	return peso_ideal;
}



