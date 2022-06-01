#include<stdio.h>

#define l 3
#define c 3

int main(){
	
	int matriz[l][c];
	int i,j;
	//printf(matriz);
	
	for(i=0; i<3;i++){
		for(j=0; j<3;j++){
			matriz[i][j]= i;
		
		}
	}
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			if(i!=j)
				printf("[%i]",matriz[i][j]);
			else
				printf("[]");
		}
	}
	
	for(i=0;i<c;i++){
		printf("[%d]\n",matriz[l][3-1-i]);
	}
	
	return 0;
}
