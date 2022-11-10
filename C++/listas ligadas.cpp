#include <cstdlib>
#include <iostream>
using namespace std;
class Pilha {
 int info; //membros da classe pilha
 Pilha *next; //ponteiro que armazena o próximo endereço
 Pilha *inic;
public:
	
 Pilha(); //construtor: sempre é executado quando criamos um objeto
 void Push(int n); //inserir elemento
 int Pop(); //remover elemento
 void Imprime(); //listar conteúdo da pilha
};
Pilha *TOPO; //Tipo do ponteiro externo: Pilha, que representa o nodo
Pilha *inic;
Pilha *fim;


Pilha::Pilha()
{
 info = 0;
 next = NULL;

}




void Pilha::Push(int n)
{
 int inicio;
 this -> info = n;
 this -> next = TOPO;
 
 
  if(TOPO == NULL){
 	inic = this;
 }
 
 TOPO = this;
 


 
}



int Pilha::Pop()
{
 int temp;
 if(TOPO == NULL)
 {
 cout << "Pilha Vazia" << endl;
 return(0);
 }
 
 
 
 temp = this -> info;
 TOPO = this -> inic;
 delete(this); //destrutor da classe
 return(temp);
}




void Pilha::Imprime()
{
 if(TOPO == NULL)
 cout << "Pilha Vazia" << endl;
 else {
 Pilha *temp;
 temp = TOPO;
 while(temp != NULL)
 {
 cout << temp -> info << endl;
 temp = temp -> next;
 }
 }
}



















int main( )
{
{
 system("CLS");
 Pilha *pp;
 int valor;
 int escolha;
 TOPO = NULL;

 
 
 do {
 system("CLS");

 cout<<" MENU PRINCIPAL \n\n\n";
 cout<<"\n (1) - Insere um elemento na Pilha";
 cout<<"\n (2) - Remove um elemento da Pilha";
 cout<<"\n (3) - Imprime a Pilha";
 cout<<"\n (4) - Para SAIR";
 cin>>escolha;
 switch (escolha)
{
 case 1:
 system("CLS");
 pp = new Pilha();
 cout << "\Entre com um numero : ";
 cin >> valor;
 pp->Push(valor);
 break;
 
 
 
 case 2:
 system("CLS");
 TOPO -> Pop();
 cout << "valor removido" ;
 system("PAUSE");
 break;
 
 
 
 
 case 3:
 system("CLS");
 TOPO -> Imprime();
 system("PAUSE");
 break;
 
 
 
 case 4:
 exit(1);
 break;
 
 
 default :
 system("CLS");
 cout << "Leia as intrucoes";
 system("PAUSE");
 
 }
} while (escolha!=4);
}

 system("PAUSE");
 return 0;
}

