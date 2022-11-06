#include <iostream>
#include <PILHA.H> 
#include <stdlib.h> 

using namespace std;

int main(){
	struct Pilha P1;
	IniPilha(&P1);
	struct Pilha P2;
	IniPilha(&P2);
	int n= 1;
	while(n==1){
	int cont = 0, z = 0;
	int x, v, t = 0, y =0;
	cout << "menu"<<endl;
	cout << "1 Inserir um número inteiro na Pilha"<<endl;
	cout << "2 Remover um elemento da Pilha"<<endl;
	cout << "3 Mostrar o elemento do topo da Pilha"<<endl;
	cout << "4 Mostrar os elementos da Pilha"<<endl;
	cout << "5 sair"<<endl;
	cin >> x;
			
		switch (x)	{
		
			case 1:
				cout << "Digite um numero?"<<endl;
				cin >> y;
				Push(&P1,y);
				cout << "Escrito com sucesso!"<<endl;
				system("PAUSE");
				system("cls");
				break;
			case 2:
				Pop(&P1);
				cout << "Removido com sucesso!"<<endl;
				system("PAUSE");
				system("cls");
				break;
			case 3:
				cout <<"o primeiro elemento da pilha é:" << Top(&P1) <<endl;
				system("PAUSE");
				system("cls");
				break;
			case 4:
			P2 = P1;
			cout << "Elementos da pilha:" << endl;
			while (!pilhavazia(&P2)) {
			x = Pop(&P2);
			cout << x << endl;
		}
			system("PAUSE");
			system("cls");
			break;
			case 5:
				n =0;
				break;
				default:
cout << "Entrada invalida. Digite valores de 1 a 5." << endl;
system("PAUSE");
system("cls");
}
		}
return 0;
}
