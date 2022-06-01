/* Formem duplas e resolva o problema abaixo utilizando função, da forma como está pedindo o enunciado. 

Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento da moeda, o programa deve 

imprimir Cara ou Coroa. Deixe o programa lançar a moeda 100 vezes e conte o número de vezes que cada lado da moeda aparece.

Imprima os resultados. O programa deve chamar uma função separada jogada que não utiliza argumentos e retorna 0 para coroa e 1 para cara.

Nota: Se o programa simular realisticamente o lançamento da moeda, cada lado da moeda deve aparecer aproximadamente metade do tempo, 

totalizando cerca de 50 caras e 50 coroas.

*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


int cara();
int coroa();
int main(){
	setlocale(LC_ALL,"Portuguese");
	int cara = 0;
	int coroa = 0;
	int a = 0;
	
	srand(time(NULL));
	
	int jogdada ();
	for(int i;i<100;i++){
	
		a = (rand() %2);
		printf("%d", rand( )%2);
		
		if (a==0){
			cara();	
		}
		else{
			coroa;
		}
	}
	
	printf("\n%d",cara);
	printf("\n%d",coroa);

	return 0;
}

int cara(){
	int cara;
	cara += 1;
	
	return cara;

}

int coroa(){
	int coroa;
	coroa += 1;
	
	return coroa;
}
