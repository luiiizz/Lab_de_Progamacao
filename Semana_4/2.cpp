/* 2. Criar uma fun��o que verifique se um n�mero digitado pelo usu�rio � primo.

Dev: Luiz Henrique Bispo
*/

#include<iostream>
#include<locale>
#include<math.h>

// Declarando das fun��es

void primo(int num);

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	cout << "Digite um n�mero: ";
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
	 	cout << "\n� primo" <<endl;
	else
		cout << "\nN�o � primo"<<endl;

}
