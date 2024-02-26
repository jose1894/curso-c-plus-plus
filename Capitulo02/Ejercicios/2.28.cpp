/*
2.28 Escriba un programa que reciba como entrada un n�mero entero de cinco d�gitos, que separe ese n�mero en sus d�gitos
individuales y los imprima, cada uno separado de los dem�s por tres espacios. [Sugerencia: use los operadores de divisi�n entera
y m�dulo.] Por ejemplo, si el usuario escribe el n�mero 42339, el programa debe imprimir:
4 2 3 3 9
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	int entero;
	
	cout << "Introduzca un numero entero de cinco digitos" << endl;
	cin >> entero;
	
	cout << (entero % 100000)/10000 << "   " << (entero % 10000)/1000 << "   " << (entero % 1000)/100 << "   " << (entero % 100)/10 << "   " << (entero % 10)/1 << endl;
	return 0;
}
