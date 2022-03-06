#include<iostream>
#include<locale>
#include<math.h>


// Declarando das funções

void menu();
float maior(float vetor[3]);
float menor(float vetor[3]);
float medio(float vetor[3], float maior, float menor);
float tria(float b, float a);
int raiz(int a, int b, int c);

using namespace std;

// Principal
main(){
	setlocale(LC_ALL,"");
	
	float area, base, altura, v[3];
	int v3,v1,v2,a,b,c;
	int op;
	
	do{
		menu();
		
		cin >> op;
		
		switch(op)
		{
			case 1:
				system("cls");
				system("color a");
				cout << "-------------Calculo  da Área do Triângulo-----------------";
				cout << "\nDigite a base: ";
				cin >> base;
				cout << "\nDigite a altura: ";
				cin >> altura;
				
				//Chamando a função
				tria(base,altura);
				break;
				
			case 2:
				system("cls");
				system("color b");
				cout << "-------------Ordenar de forma crescente 3 valores-----------------";
	
				for(int i=0;i<3;i++){
					cout << "\n\nDigite o " << i+1 <<"º valor: ";
					cin >> v[i];
				}
				
				cout << "\nOrdem cresecente dos valores: "<< menor(v) << ", " << medio(v,maior(v), menor(v)) <<", "<< maior(v);
				break;
				
			case 3:
				system("cls");
				system("color c");
				cout << "-------------Ordenar de forma decrescente 3 valores-----------------";
	
				for(int i=0;i<3;i++){
					cout << "\n\nDigite o " << i+1 <<"º valor: ";
					cin >> v[i];
				}
				
				cout << "\nOrdem decresecente dos valores: "<< maior(v) << ", " << medio(v,maior(v), menor(v)) <<", "<< menor(v);
				break;
				
			case 4:
				system("cls");
				system("color 6");
				cout << "-------------Raízes do segundo grau-----------------";
				
				cout << "\nCoeficiente a: ";
    			cin >> a;
    			cout << "Coeficiente b: ";
				cin >> b;
				cout << "Coeficiente c: ";
				cin >> c;
				cout<<endl;
				
				// Chamando a função raiz
				raiz(a,b,c);
				cout<<endl;
				
				break;	
			default:
				if (op != 5){
					system("cls");
					cout << "\nDigite uma opção válida";
				}
				cout << "\n\nObrigado por utilizar o script !!!";
				
		}
	}while(op!=5);
}



// Definindo funções

void menu(){
	cout << "\n\n---------------MENU---------------";
	cout << "\n1. Calcular  da Área do Triângulo";
	cout << "\n2. Ordernar de forma crescente 3 valores";
	cout << "\n3. Ordernar de forma descrescente 3 valores";
	cout << "\n4. Raízes do segundo grau";
	cout << "\n5. Sair";
		
	cout<< "\n\nDigite uma opcão: ";	
}

float tria(float b, float a){
	cout << "\nA área do triângulo é: " << (b*a)/2;
}

float maior(float vetor[3]){
	float m = 0, t = 0;
	
	for(int a=0;a<3;a++){
		t = vetor[a];	
		if (t >= m)
				m = t;					
	}
	return m;
}

float menor(float vetor[3]){
	float m = vetor[0], t = 0;
	
	for(int a=0;a<3;a++){
		t = vetor[a];	
		if (t <= m)
				m = t;					
	}
	return m;
}

float medio(float vetor[3], float maior, float menor){
	float medio;
	
	for(int a=0;a<3;a++){
		if (vetor[a] != maior && vetor[a]!= menor){
			medio = vetor[a];
		}
	}

	return medio;
}

int raiz(int a, int b, int c){
	int delta,r1,r2;
	
	if (a!=0){
		delta = pow(b,2) - (4*a*c);
		
		if (delta < 0){
			cout << "Não tem raízes reais";
			
		}else if (delta==0){
	            r1 =(-b)/(2*a);
	            cout << "Possui apenas uma raiz real: "<<r1<<endl;
	    }else{
	            r1=(-b - sqrt(delta))/(2*a);
	            r2=(-b + sqrt(delta))/(2*a);
	            cout << "Raiz 1: "<<r1<<endl;
	            cout << "Raiz 2: "<<r2<<endl;
	        }
	}else
        cout <<"a=0, não é uma equação do segundo grau\n";
}
