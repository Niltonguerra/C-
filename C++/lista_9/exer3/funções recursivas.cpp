/*
3.ª) Elabore um programa recursivo que calcule o MDC de dois 
inteiros usando o algorítmo de Euclides, que pode ser descrito 
da seguinte forma: dividimos o número maior pelo número menor e 
pegamos o resto. Na continuação do processo, pegamos o divisor e o 
dividimos pelo resto até que este seja zero. O quociente da última 
divisão será o próprio MDC. Por exemplo, suponha que sejam os números 
928 e 100. Dividindo-os, obteremos um resto de 28. em seguida, dividimos 
100 por 28 e obtemos um resto 16, depois 28 por 16 e obtemos um resto 12, 
depois 16 por 12 e obtemos um resto 4 e, finalmente, 12 por 4 e um resto 0. 
Então, o MDC é 4, que é o quociente da última divisão. A seguir, encontramos 
uma definição matemática do algoritmo de Euclides, que pode ser útil para o 
desenvolvimento do programa recursivo:


MDC (x,y) = MDC(y,x) x < y
x y=0
MDC(y, x % y) se x > y

*/



#include <iostream>

using namespace std;


float MDC(int x,int y){
	
if (x < y){
return (MDC(y,x));
}

else if(y==0) {
return (x);
}

else if(x > y){
return (MDC(y, x % y));	
}
}



int main(){
	
int num1,num2;
cout << "Informe o numero:" ;
cin >> num1;
cout << "Informe o numero:" ;
cin >> num2;
cout << "O mdc e:" << MDC(num1,num2) << endl;
return 0;

}
