#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
Caíque Oliveira Carvalho
Carlos Eduardo Cunha Ribeiro
Lorrayne Annyelly
Luiz Henrique Bispo
Gustavo Gomes dos Santos
Mateus Guimarães
Guthyerres Borges
*/

int counter = 0;

hanoi (int n, char a, char b, char c) {
    if (n == 1) {
	    printf("Disco %d movido de %c para %c\n", n, a, b);
	    counter++;
	}
    else {
		hanoi (n - 1, a, c, b);

        printf("Disco %d movido de %c para %c\n", n, a, b);
		counter++;
        hanoi (n - 1, c, b, a);
    }
    return counter;
}

main () {
	setlocale(LC_ALL, "Portuguese");

	int discos;
	
    printf("******************************************************\n");
    printf("*                   Torre de Hanói                   *\n");
    printf("******************************************************\n");
    printf("\nInsira a quantidade de discos que você quer calcular: ");
    scanf("%i", &discos);

	printf("\n\nMovimentos totais: %d", hanoi(discos, 'A', 'C', 'B'));
}
