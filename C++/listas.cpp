#include <iostream>














/*

C?digo aprendido ao assistir a video aula: 
https://www.youtube.com/watch?v=1XDBMy3rgi4

Super recomendo esse canal do youtube, explica??o muito clara e f?cil de intender,
professor simp?tico e com amplo conhecimento na ar?a da t?cnologia.


segue link do git hub:
https://gist.github.com/marcoscastro

*/

















using namespace std;

// classe No
class No
{
private:
	int v;
	No* prox;
public:
	No(int v) // construtor
	{
		this->v = v;
		this->prox = NULL;
	}

	int obterValor() // obt?m o valor
	{
		return v;
	}

	No* obterProx() // obt?m o pr?ximo No
	{
		return prox;
	}

	void setProx(No* p) // seta o pr?ximo No
	{
		prox = p;
	}
};

// classe Lista
class Lista
{
private:
	No* cabeca; // primeiro elemento
	No* cauda; // ?ltimo elemento

public:
	Lista()
	{
		// se n?o passar elemento, ent?o cabeca e cauda s?o NULL
		cabeca = NULL;
		cauda = NULL;
	}

	Lista(int v)
	{
		// se passar elemento, ent?o cria novo No
		cabeca = new No(v);
		cauda = cabeca;
	}

	virtual ~Lista() // destrutor
	{
		delete cabeca;
	}

	void mostrar() // mostra todos os elementos da lista
	{
		cout << "\nImprimindo todos os elementos...\n";
		No* c = cabeca;

		if(vazia())
			cout << "A lista NAO possui elementos!!\n";
		else
		{
			while(c) // percorre a lista
			{
				cout << c->obterValor() << endl;
				c = c->obterProx();
			}
			cout << endl;
		}
	}

	bool vazia() // verifica se a lista est? vazia
	{
		return (cabeca == NULL);
	}

	// insere no in?cio (semelhante a push_front da list)
	void inserir_inicio(int v)
	{
		No* novo_no = new No(v);

		if(vazia())
		{
			cabeca = novo_no;
			cauda = novo_no;
		}
		else
		{
			novo_no->setProx(cabeca);
			cabeca = novo_no;
		}
	}

	// insere no final (semelhante a push_back da list)
	void inserir_final(int v)
	{
		No* novo_no = new No(v);

		if(vazia())
		{
			cabeca = novo_no;
			cauda = novo_no;
		}
		else
		{
			cauda->setProx(novo_no);
			cauda = novo_no;
		}
	}

	// retorna o tamanho da lista
	int tamanho()
	{
		if(vazia()) // se for vazia, ent? retorna 0
			return 0;

		No* c = cabeca;
		int tam = 0;
		
		// percorre a lista
		do
		{
			c = c->obterProx();
			tam++;
		}
		while(c);
		
		return tam;
	}

	// verifica se um elemento existe na lista
	bool existe(int v)
	{
		No* c = cabeca;
		
		while(c)
		{
			if(c->obterValor() == v)
				return true;
			c = c->obterProx();
		}
		return false;
	}

	// remove da lista, remo??o do final (semelhante a pop_back da list)
	void remover()
	{
		if(!vazia())
		{
			// se houver s? 1 elemento
			if(cabeca->obterProx() == NULL)
				cabeca = NULL;
			else if(cabeca->obterProx()->obterProx() == NULL) // 2 elementos
				cabeca->setProx(NULL);
			else // > 2 elementos
			{
				No* ant_ant = cabeca;
				No* ant = cabeca->obterProx();
				No* corrente = cabeca->obterProx()->obterProx();

				while(corrente)
				{
					No* aux = ant;
					ant = corrente;
					ant_ant = aux;
					corrente = corrente->obterProx();
				}
				delete ant_ant->obterProx(); // libera mem?ria
				ant_ant->setProx(NULL); // seta o prox como NULL
				cauda = ant_ant; // atualiza a cauda
			}
		}
	}
};

int main(int argc, char *argv[])
{
	
	Lista l;
	/*
	if(l.vazia())
		cout << "Lista vazia!!\n";
	else
		cout << "Lista NAO vazia!!\n";
	
	l.mostrar();
	
	if(l.existe(10))
		cout << "\nO elemento 10 existe na lista!!\n";
	else
		cout << "\nO elemento 10 NAO existe na lista!!\n";
	
	l.inserir_final(10);
	l.inserir_final(20);
	l.inserir_final(30);
	l.inserir_final(40);
	l.inserir_inicio(50);
	
	l.mostrar();
	
	if(l.vazia())
		cout << "Lista vazia!!\n";
	else
		cout << "Lista NAO vazia!!\n";
	
	if(l.existe(10))
		cout << "\nO elemento 10 existe na lista!!\n";
	else
		cout << "\nO elemento 10 NAO existe na lista!!\n";
	
	l.remover();
	
	l.mostrar();
	
	cout << "Tamanho da lista: " << l.tamanho() << endl;
	
 
 
 */
 
 
 int escolha;
 
 
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
 int valor;
 system("CLS");
 cout << "\Entre com um numero : ";
 cin >> valor;
 l.inserir_inicio(valor);
 break;
 
 
 
 case 2:
 system("CLS");
 l.remover();
 cout << "valor removido" ;
 system("PAUSE");
 break;
 
 
 
 
 case 3:
 system("CLS");
 l.mostrar();
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


 system("PAUSE");
 return 0;
}

