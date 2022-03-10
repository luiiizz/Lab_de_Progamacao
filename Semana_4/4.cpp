/*	4. Fa�a uma fun��o que receba como par�metro a hora de inicio e a hora de t�rmino de
um jogo, ambas subdivididas em dois valores distintos: hora e minutos. A fun��o dever�
retornar a dura��o expressa em minutos, considerando que o tempo m�ximo de
dura��o de um jogo � de 24 horas e que ele pode come�ar em um dia e terminar no
outro.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>
#include<math.h>
#include<string>

using namespace std;

// Prot�tipo fun��o para c�lculo dura��o do jogo
int time(int inicio[2], int termino[2]);

int main(){
	setlocale(LC_ALL,"");
	
	int inicio[2], termino[2];
	cout << "\nDigite apenas a hora de in�cio: ";
	cin >> inicio[0];
	cout << "\nDigite os minutos da hora de in�cio: ";
	cin >> inicio[1];
	cout << endl;
	
	cout << "\nDigite apenas a hora de t�rmino: ";
	cin >> termino[0];
	cout << "\nDigite os minutos da hora de in�cio: ";
	cin >> termino[1];
	cout << endl;
	
	system("pause");
	system("color a");
	cout << "\nA dura��o do jogo foram: " << time(inicio,termino) << " minutos.";
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




