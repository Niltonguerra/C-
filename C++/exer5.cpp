#include <iostream>
#include <pilha.h>
#include <string.h>

using namespace std;

int main(){
	
	int t, i;
	char palavra[40], x;
	struct Pilha P1;
	
	IniPilha(&P1);
	
	cout <<"Digite a palavra: ";
	cin>> palavra;
	
	t=strlen(palavra);
	
	for (i=0;i<t;i++){
		Push(&P1,palavra[i]);
	}	
	
	cout <<"Palavra invertida = ";
	while (!pilhavazia(&P1)){
		x=Pop(&P1);
		cout <<x;
	}
	return 0;	
}
