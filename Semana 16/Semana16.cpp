/* BANCO HENRIKS

	Semana 16 - Laboratório de Progamação
	
	Dev. Luiz Henrique Bispo Barreira
*/

#include<iostream>

using namespace std;

struct Conta{
	int numero;
	string nome_cliente;
	float saldo;
	
	void mostrar(){
		cout << "\nNúmero da conta: " << numero;
		cout << "\nNome do Cliente: " << nome_cliente;
		cout << "\nSaldo: " << saldo << endl<<endl;
	}
}conta[15];

int menu();
main(){
	setlocale(LC_ALL,"");
	string pesq_cliente;
	int op, ver_numero = 0, menor_saldo, nao_cadrast = 0;
	int contagem_contas = 0;
	int auxiliar_numero = 0;
	int auxiliar_nome = 0;
	int auxiliar_saldo= 0;
	int total_contas = 0;
	Conta contas[15];
	

	for(int i=0; i<15; i++){
		contas[i].numero = 0;
		contas[i].saldo = 0;
	}
	
	op = menu();
	
	while (op != 4){
		
		switch(op){
			case 1:
			//1. Cadastrar contas
				ver_numero = 0;
				//Loop para validar numero de conta disponivel
				while(ver_numero == 0){
					cout << "\nDigite o número da conta: ";
					cin >> auxiliar_numero;
					for(int i=0; i<15;i++){
						//Verificar se já existe.
						if(contas[i].numero == auxiliar_numero){
							system("cls");
							cout << "\nConta já cadrastrada\n";
							break;
						}
						else if (contas[i].numero == 0){
							//Cadastrando a conta
							contas[i].numero = auxiliar_numero;
							cout << "\nDigite o nome do cliente: ";
							cin >> contas[i].nome_cliente;
							cout << "\nDigite o saldo: ";
							cin >> contas[i].saldo;
							menor_saldo = contas[i].saldo;
							ver_numero = 1;
							system("cls");
							//Mostrando Conta
							cout << "Conta cadastrada"<<endl;
							cout << "----------------";
							contas[i].mostrar();
				
							break;
						}
					}
				}
				break;
			case 2:
			//2. Visualizar todas as contas de um determinado cliente
				cout << "\nDigite o nome do cliente: ";
				cin >> pesq_cliente;
				system("cls");
				nao_cadrast = 0;
				for(int i=0; i<15; i++){
					if (pesq_cliente == contas[i].nome_cliente){
						cout << "Contas do cliente: " << pesq_cliente;
						cout << "\n-----------------------";
						contas[i].mostrar();
						nao_cadrast = 1;
					}
				}
				if(nao_cadrast == 0){
					cout<<"\nCliente não cadastrado\n\n";
				}
				break;
			case 3:
			//3. Excluir a conta com o menor saldo
				for(int i=0; i<15; i++){
				//Descobrindo a conta com menor saldo
					if(contas[i].saldo != 0 && contas[i].saldo < menor_saldo)
						menor_saldo = contas[i].saldo;
				}
				for(int i=0; i<15; i++){
				//Excluindo a conta com menor saldo
					if(contas[i].saldo == menor_saldo && contas[i].saldo != 0){
						system("cls");
						cout << "\nExcluindo a seguinte conta: "<<endl;
						contas[i].mostrar();
						contas[i].numero = 0;
						contas[i].nome_cliente = "";
						contas[i].saldo = 0;
					}
				}
				
		}
		
		//Repetir até 4.Sair
		if(op != 4){
			cout <<"---------------------------------------------------------"<<endl;
			op = menu();
		}
	}

}
int menu(){
	int op;
	system("color b");
	cout << "MENU DE OPÇÕES: " <<endl<<endl;
	cout << "1. Cadastrar contas" <<endl;
	cout << "2. Visualizar todas as contas de um determinado cliente"<<endl;
	cout << "3. Excluir a conta com o menor saldo"<<endl;
	cout << "4. Sair"<<endl<<endl;
	
	cout<< "Digite a opção: ";
	cin >> op;
	return op;
}
