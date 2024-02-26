/*
2.25 Escriba un programa que lea dos enteros, determine si el primero es un múltiplo del segundo e imprima el resultado.
[Sugerencia: use el operador de módulo.]
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	int entero1, entero2;
	
	cout << "Introduzca el primer entero" << endl;
	cin >> entero1;
	cout << "Introduzca el segundo entero" << endl;
	cin >> entero2;
	
	if (entero1 % entero2 == 0){
		cout << "El entero " << entero2 << " es multiplo de " << entero1 << endl;
	}
	
	if (entero1 % entero2 != 0){
		cout << "El entero " << entero2 << " no es multiplo de " << entero1 << endl;
	}
	return 0;
}
