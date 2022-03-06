/*	6. Faça uma função que receba como parâmetro um valor inteiro e positivo N, indicando
a quantidade de parcelas de uma soma S, calculada pela formula abaixo e retorne o
valor para o programa principal.

Dev: Luiz Henrique Bispo
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

using namespace std;

// Protótipo função
float calculoS(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n;
	
	printf("Digite a quantidade de parcelas (N): ");
	scanf("%d",&n);
	
	printf("\nValor de S: %.2f", calculoS(n));
	
	return 0;
}

float calculoS(int n){
	float s1 = 0, s2 = 0;
	
	for(int j=1; j<=n; j++){
		
		s1 = (pow(j,2) + 1)/(j+3);
		//cout << s1<<endl;
		s2 += s1;
	}
	
	return s2;
}

