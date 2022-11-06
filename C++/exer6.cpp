#include <iostream>
#include <pilha.h>
#include <string.h>

using namespace std;

int main(){
	
	int t, i,cont=0;
	char palavra[40], x;
	struct Pilha P1;

	
	
	IniPilha(&P1);
	cout <<"Digite a palavra: ";
	cin>> palavra;
	
	t=strlen(palavra);
	
	for (i=0;i<t;i++){
		Push(&P1,palavra[i]);
	}
		for (i=0;i<t;i++){
			if(Top(&P1)==palavra[i]){
			cont = cont+1;	
			}
			Pop(&P1);
	}

		if (cont==t){
			cout << "E palindroma";

		}
		else{
			cout << "Nao e palindroma" <<endl;

		}
	return 0;	
}
