//Uso de recursividade para realizar multiplicação de dois valores

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

double multiplica(int a, int b){
	double prod = 0;
	if(b==1)
		return a;
	else{
		prod += a + multiplica(a, b-1);
		return prod;
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b;
	
	printf("----------------");
	printf("Multiplicação: ");
	printf("----------------\n Digite....");	
	
	scanf("%d",&a);
	printf(" X ");				
	scanf("%d",&b);
	
	printf("O produto é: %lf",multiplica(a,b));
}




