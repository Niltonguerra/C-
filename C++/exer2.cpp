#include <iostream>
#include <pilha.h>
#include <string.h>

using namespace std; 

int main(){
	
	
	
	
	struct Pilha P1;
	IniPilha(&P1);	
	
	
	int x,y= 0;
	
	
	
	
	while(x!=999){
	cout << "digite um numero?"; 
	cin>> x;
	if(x!=999){
		Push(&P1,x);
	}
	
	}
	
	while (!pilhavazia(&P1)){
	y=Pop(&P1);
	cout <<y;
	}
	
	
system("PAUSE");
return 0;
}

