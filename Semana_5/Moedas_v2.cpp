/* Formem duplas e resolva o problema abaixo utilizando fun��o, da forma como est� pedindo o enunciado. 


Escreva um programa que simule o lan�amento de uma moeda. Para cada lan�amento da moeda, o programa deve 

imprimir Cara ou Coroa. Deixe o programa lan�ar a moeda 100 vezes e conte o n�mero de vezes que cada lado da moeda aparece.

Imprima os resultados. O programa deve chamar uma fun��o separada jogada que n�o utiliza argumentos e retorna 0 para coroa e 1 para cara.


Nota: Se o programa simular realisticamente o lan�amento da moeda, cada lado da moeda deve aparecer aproximadamente metade do tempo, 

totalizando cerca de 50 caras e 50 coroas.



Dev: Luiz Henrique Bispo Barreira
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int jogada();

int main(){
	setlocale(LC_ALL,"Portuguese");
	int cara = 0;
	int coroa = 0;
	int a = 0;
	
	srand(time(NULL));
	
	for(int i;i<100;i++){

		a = jogada();
		if (a==0){
			printf("\nCara");
			cara += 1;
		}
		else{
			printf("\nCoroa");
			coroa += 1;
		}
	}
	
	system("color b");
	printf("\n\n%d vezes Cara \n%d vezes Coroa",cara,coroa);
	return 0;
}

int jogada(){
	return rand()%2;
}
