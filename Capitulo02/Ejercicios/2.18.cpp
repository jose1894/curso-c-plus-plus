/*
2.18 Escriba un programa que pida al usuario que escriba dos enteros, que obtenga los n�meros del usuario e imprima el
n�mero m�s grande, seguido de las palabras "es m�s grande". Si los n�meros son iguales, imprima el mensaje "Estos n�meros
son iguales."
*/

#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a, b;
	
	cout << "Escribe dos enteros\n";
	
	cin >> a >> b;
	
	if( a > b ){
		cout << a << " es mas grande";
	}
	if( b > a ){
		cout << b << " es mas grande";
	}
	
	if( a == b ){
		cout << "Estos numeros son iguales";
	}
	return 0;
}
