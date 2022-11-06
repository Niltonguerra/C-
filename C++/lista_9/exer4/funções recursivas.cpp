
/*

4.a.)Elaborar um programa recursivo que dado um número natural K, calcular a potência X 
elevado a K através de produtos sucessivos.




Obs.:
xk = x *x k-1 Se k > 1
xk = x Se k=1
xk = 1 Se k=0


Independente do valor de k, para X=0 ou 1 o resultado é imediato, isto é, 0 e 1.
*/


#include <iostream>

using namespace std;


int pot(int x, int k){

	
if (k > 1){	
	return x*pot(x,(k-1));

}

else if(k==1) {
return (x);
}

else if(k==0){
return  (1);	
}
}




int main(){
	
int x,k;
cout << "Informe a base:" ;
cin >> x;
cout << "Informe o exponencial:" ;
cin >> k;
cout << "A potencia e:" << pot(x,k) << endl;
return 0;

}
