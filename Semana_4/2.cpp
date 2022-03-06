/* 2. Criar uma função que verifique se um número digitado pelo usuário é primo.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>
#include<math.h>

// Declarando das funções

void primo(int num);

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	cout << "Digite um número: ";
	cin >> num;
	
	primo(num);
	
	return 0;	
}

void primo(int num){
	
	int i, v=0;
	
	for(int i=1; i<=num; i++){
		if(num%i==0){
			v++;		
		}
	}
	if (v==2)
	 	cout << "\nÉ primo" <<endl;
	else
		cout << "\nNão é primo"<<endl;

}
