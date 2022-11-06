/*
1.ª) Implementar um programa recursivo em C++ que imprima qual o “n” termo da série
de Fibonacci. (1,1,2,3,5,8.....)
Por exemplo: Qual o 6º termo da série? O programa deverá informar 8.


fibonacci(x) = 1 x=1
1 x=2
fibonacci(x-1) + fibonacci(x-2) x>2

*/

#include <iostream>

using namespace std;


int fibo(int x){
	
if (x==1){
return (1);
}

else if(x==2) {
return (1);
}

else if(x>2){
return (fibo(x-1) + fibo(x-2));	
}
}




int main(){
	
int num;
cout << "Informe o numero:" ;
cin >> num;
cout << "O fibonacci e:" << fibo(num) << endl;
return 0;

}
