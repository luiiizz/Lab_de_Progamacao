/*  4. Fa�a uma sub-rotina que receba como par�metro o raio de uma esfera, calcule e mostre
no programa principal o seu volume: v = 4/3 * R�.
*/


#include<stdio.h>
#include<locale.h>
#include<math.h>


// Prot�tipo fun��o
float subr(float raio);

int main(){
	setlocale(LC_ALL,"");
	
	float raio;
	
	printf("Digite o raio da esfera: ");
	scanf("%f",&raio);
	
	printf("Volume: %.2f",subr(raio));
	
	return 0;
}

float subr(float raio){
	float volume;
	
	volume = 1.33333*pow(raio,3);
	
	return volume;
}



