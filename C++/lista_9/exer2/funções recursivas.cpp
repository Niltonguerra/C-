
/*
Defina um programa recursivo para, dado um número n, imprimi-lo em base binária.
*/

#include <iostream>

#include <stdio.h>
using namespace std;
void ConvertToBinary(int n);
int main() {
	int num;
	cout << "Informe um numero:" ;
	cin >> num;

	ConvertToBinary(num);

    return 0;
}
void ConvertToBinary(int n)
{
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    cout << n % 2;
}
