// Dev: Luiz Henrique Bispo Barreira - 2110105

#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

#define lin 5
#define col 4



int main(){
	setlocale(LC_ALL,"");
	
    int lp =1,
        li=0,
        cp=0,
        ci=0,
        matriz[lin][col],
        i, num=0, j, teste=0;

    printf("Preenchando a Matriz:");
    for ( i = 0; i < (lin*col); ++i){
        teste = 0;
        do{
        	//***
            printf("\n Esccreva um valor inteiro: ");
            scanf("%d", &num);
            if(num%2==0){
                if(cp==col){
                    lp+=2;
                    cp=0;
                }
                if(lp > lin){
                	//***
                    printf("\n Sem local para armazenar valores pares");
                }else{
                    matriz[lp][cp] = num;
                    printf("\n Valor par, inserido na linha: %d, coluna: %d.", lp+1, cp+1);
                    cp++;
                    teste=1;
                }   
            }else{
                if(ci==col){
                    li+=2;
                    ci=0;
                }
                if(li > lin){
                	//***
                    printf("\n Sem local para armazernar números impares");
                }else{
                    matriz[li][ci] = num;
                    printf("\n Valor impar, inserido na linha %d, coluna %d.", li+1, ci+1);
                    ci++;
                    teste=1;
                }
            }
        }while(teste==0);
    }
    printf("\n\n---------------------");
    printf("\n\Matriz:\n");
    for ( i = 0; i < lin; ++i){
        for ( j = 0; j < col; ++j){
            printf("[ %d ]",matriz[i][j]);
        }
        printf("\n");
        printf("");
    }
    return 0;
}
