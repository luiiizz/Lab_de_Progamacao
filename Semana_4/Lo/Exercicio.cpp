#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exercício: 2

2. Criar uma função que verifique se um número digitado pelo usuário é primo.

*/

void p(int num);


int main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	p(num);
	
	return 0;	
}

void p(int num){
	
	int i, v=0;
	
	for(int i=1; i<=num; i++){
		if(num%i==0){
			v++;		
		}
	}
	if (num==1)
	 	printf("\nÉ primo\n");
	if (v==2)
	 	printf("\nÉ primo\n");
	else if(num!=1)
		printf("\nNão é primo\n");

}
