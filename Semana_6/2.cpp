/*2. Crie uma sub-rotina que receba três números inteiros como parâmetros, representando
horas, minutos e segundos, e os converta em segundos. Exemplo: 2h, 40min e 10s
correspondem a 9.610 segundos.
*/
#include<iostream>
#include<locale.h>
#include<math.h>
#include<cstdlib>

using namespace std;

// Protótipo função
int subr(int a, int b, int c);

int main(){
	setlocale(LC_ALL,"");
	int horas, minutos, segundos;
	cout << "Digite as horas: ";
	cin >> horas;
	cout << "Digite os minutos: ";
	cin >> minutos;
	cout << "Digite os segundos: ";
	cin >> segundos;
	
	cout << "\nTotal de segundos: " << subr(horas,minutos,segundos);
}

int subr(int a, int b, int c){
	int total;
	
	total = (a*3600)+(b*60)+c;
	return total;
}
