#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/* Formem duplas e resolva o problema abaixo utilizando função, da forma como está pedindo o enunciado. 

Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento da moeda, o programa deve 

imprimir Cara ou Coroa. Deixe o programa lançar a moeda 100 vezes e conte o número de vezes que cada lado da moeda aparece.

Imprima os resultados. O programa deve chamar uma função separada jogada que não utiliza argumentos e retorna 0 para coroa e 1 para cara.

Nota: Se o programa simular realisticamente o lançamento da moeda, cada lado da moeda deve aparecer aproximadamente metade do tempo, 

totalizando cerca de 50 caras e 50 coroas.

Dev: Luiz Henrique Bispo 
*/
int random(){
	srand(clock());
	return rand()%101 > 50;	
}


int main(){
	int a, cara = 0, coroa = 0;
	
	printf("Digite a quantidade de jogadas: ");
	scanf("%i", &a);
	
	for(int i = 0; i <= a; i++) {
		if(random()){
			printf("Coroa\n");
			coroa++;
			
		} else {
			printf("Cara\n");
			cara++;
		}
	}
	printf("Coroas: %i\nCara: %i", coroa, cara);
	
	return 0;
}
