#include <iostream>
#include <stdlib.h> 
#include <PILHA.H> 
#include <Fila.h>

using namespace std;

int main()
{
system("CLS"); 
int elem,op,x,i,y,t,v; 
struct queue q;

inicFila(&q);	/*Inicializa a fila*/ 

op=0;			/*Loop principal: para sair escolher opcao 4*/ 

struct Pilha P1;
IniPilha(&P1);

struct Pilha P2;
IniPilha(&P2);

while (op!=4)
{
	op=0;	/*Desenhando o menu principal*/ 
	system("CLS");
	cout<<"	Fila Circular \n\n";
	cout<<"\n	(1) - Insere um elemento na Fila"; 
	cout<<"\n	(2) - Remove um elemento da Fila"; 
	cout<<"\n	(3) - Imprime a Fila";
	cout<<"\n	(4) - Sair";
	cout<<"\n	(5) - Inverter o conteudo da Fila";
	cout<<"\n	(6) - O primeiro elemento da Fila";
	cout<<"\n	(7) - Numeros de elementos da Fila";
	cout<<"\n	(8) - O ultimo elemento da Fila";

	cout<<"\n\n	Digite sua opcao: "; cin>>op;			

while (op<1 || op>8)
{
	cin>>op;

}
		/*Escolha*/ switch (op)
		{
		case 1:
		if (filaCheia(&q)==1)
		{
		cout <<"A fila esta cheia!!";
		}
		else
		{
		v = 0;
		system("CLS");
		cout<<"Entre com um valor : "; 
		cin>>elem;
		insFila(&q,elem);

		}
		break;
		
		case 2:
		if (filaVazia(&q)==1)
		{
		cout <<"A fila esta vazia!!"; 
		system("PAUSE");
		}
		else
		{

		system("CLS");
		x=remFila(&q);
		cout <<"Valor removido: " << x << "\n"; 
		system("PAUSE");
		}	
		break;
		
			case 3:
			if (filaVazia(&q)==1)
			{
				cout <<"A fila esta vazia!!"; 
				system("PAUSE");
			}
			else
			{
			system("CLS");
			y=guardainicio(&q); /*armazena o indice do primeiro elemento da fila*/
			
			
			while (!filaVazia(&q))
			{
			x=remFila(&q);
			
			cout << x << " " << "\n";
			}
			
			retornainicio(&q,y); /*retorna para o primeiro elemento da fila*/
			system("PAUSE");
			
			}
			break;

			case 4:
			break;
			
			
			case 5:
				system("CLS");
				cout << "Elementos da fila invertido:" << endl;

				while(!filaVazia(&q)){
				x = remFila(&q);
				Push(&P1,x);
				}
				
				while (!pilhavazia(&P1)) {
				x = Pop(&P1);
				insFila(&q, x);
				cout << x << endl;
				}
				 
				 system("PAUSE");	 
			break;
			
			case 6:
				while(!filaVazia(&q)){
				x = remFila(&q);
				Push(&P1,x);
				}
				
				while (!pilhavazia(&P1)) {
				x = Pop(&P1);
				insFila(&q, x);
				 }
					
				while(!filaVazia(&q)){
				x = remFila(&q);
				Push(&P1,x);
				}
				
				P2 = P1;
				
				while (!pilhavazia(&P1)) {
				x = Pop(&P1);
				insFila(&q, x);
				}
				
				v = Pop(&P2);
    			system("CLS");
    			cout << "O primeiro elemento da fila e: " << v << endl;
    			
    			system("PAUSE");	
			break;
			
			case 7:
				if (filaVazia(&q)==1)
				{
					cout <<"A fila esta vazia!!"; 
					system("PAUSE");
				}
				else
				{
				system("CLS");
			
				y=guardainicio(&q); /*armazena o indice do primeiro elemento da fila*/
				t = 0;
			
				while (!filaVazia(&q))
				{
				x=remFila(&q);
				t++;
				
				}
				cout << "Numeros de elementos: " << t << endl;
				retornainicio(&q,y); /*retorna para o primeiro elemento da fila*/
				system("PAUSE");
			break;
			
			case 8:
				system("CLS");
				while(!filaVazia(&q)){
				x = remFila(&q);
				Push(&P1,x);
				}
				P2 = P1;

				
				while (!pilhavazia(&P1)) {
				x = Pop(&P1);
				insFila(&q, x);
				 }
				

					
				while(!filaVazia(&q)){
				x = remFila(&q);
				Push(&P1,x);
				}
				
				while (!pilhavazia(&P1)) {
				x = Pop(&P1);
				insFila(&q, x);
				 }
				v = Pop(&P2);
				cout << "O ultimo elemento e: " << v << endl;
				while (!pilhavazia(&P1)) {
				x = Pop(&P1);
			}
				 system("PAUSE");	
			break;
			}
			}
	}
}
