#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Dev: lorrayne Annyelly P. Cardoso
Data: 06/03/2022
Exerc�cio: 2

2. Criar uma fun��o que verifique se um n�mero digitado pelo usu�rio � primo.

*/

void p(int num);


int main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	printf("Digite um n�mero: ");
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
	 	printf("\n� primo\n");
	if (v==2)
	 	printf("\n� primo\n");
	else if(num!=1)
		printf("\nN�o � primo\n");

}
