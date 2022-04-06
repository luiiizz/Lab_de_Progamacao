/*
Digitar a quantidade de discos
Opciconal: Mostrar passos
Retornar a quantidade de movimentos
*/

#include<iostream>
#include<math.h>
#include<locale>

int mov(int discos);

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	system("color B");
	
	int discos = 0;
	
	cout << "\n=========================================";
	 
	cout << "\nDigite a quantidade de discos: ";
	cin >> discos;
	
	
	cout << "\nQuantidade mínimo de movimentos: " << mov;
	cout << mov(discos);
	cout << "\n=========================================";
}

int mov(int discos){
	
	int mov = 0;
	
	mov = (pow (2,discos) -1);
	
	return mov;
	
}
