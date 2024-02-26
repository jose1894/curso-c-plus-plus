/*
2.28 Escriba un programa que reciba como entrada un número entero de cinco dígitos, que separe ese número en sus dígitos
individuales y los imprima, cada uno separado de los demás por tres espacios. [Sugerencia: use los operadores de división entera
y módulo.] Por ejemplo, si el usuario escribe el número 42339, el programa debe imprimir:
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
