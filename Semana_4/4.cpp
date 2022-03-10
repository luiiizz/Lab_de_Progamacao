/*	4. Faça uma função que receba como parâmetro a hora de inicio e a hora de término de
um jogo, ambas subdivididas em dois valores distintos: hora e minutos. A função deverá
retornar a duração expressa em minutos, considerando que o tempo máximo de
duração de um jogo é de 24 horas e que ele pode começar em um dia e terminar no
outro.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>
#include<math.h>
#include<string>

using namespace std;

// Protótipo função para cálculo duração do jogo
int time(int inicio[2], int termino[2]);

int main(){
	setlocale(LC_ALL,"");
	
	int inicio[2], termino[2];
	cout << "\nDigite apenas a hora de início: ";
	cin >> inicio[0];
	cout << "\nDigite os minutos da hora de início: ";
	cin >> inicio[1];
	cout << endl;
	
	cout << "\nDigite apenas a hora de término: ";
	cin >> termino[0];
	cout << "\nDigite os minutos da hora de início: ";
	cin >> termino[1];
	cout << endl;
	
	system("pause");
	system("color a");
	cout << "\nA duração do jogo foram: " << time(inicio,termino) << " minutos.";
	return 0;
}

int time(int inicio[2], int termino[2]){
	int duracao=0;
	
	if (termino[0] > inicio[0])
		duracao = (termino[0]*60 + termino[1]) - (inicio[0]*60 + inicio[1]);
	else
		duracao = (1440 - (inicio[0]*60 + inicio[1])) + (termino[0]*60 + termino[1]);
	
	if (duracao < 1440)
		return duracao;
	else
		return 0;
		
}




