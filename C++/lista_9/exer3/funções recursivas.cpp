/*
3.�) Elabore um programa recursivo que calcule o MDC de dois 
inteiros usando o algor�tmo de Euclides, que pode ser descrito 
da seguinte forma: dividimos o n�mero maior pelo n�mero menor e 
pegamos o resto. Na continua��o do processo, pegamos o divisor e o 
dividimos pelo resto at� que este seja zero. O quociente da �ltima 
divis�o ser� o pr�prio MDC. Por exemplo, suponha que sejam os n�meros 
928 e 100. Dividindo-os, obteremos um resto de 28. em seguida, dividimos 
100 por 28 e obtemos um resto 16, depois 28 por 16 e obtemos um resto 12, 
depois 16 por 12 e obtemos um resto 4 e, finalmente, 12 por 4 e um resto 0. 
Ent�o, o MDC � 4, que � o quociente da �ltima divis�o. A seguir, encontramos 
uma defini��o matem�tica do algoritmo de Euclides, que pode ser �til para o 
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
