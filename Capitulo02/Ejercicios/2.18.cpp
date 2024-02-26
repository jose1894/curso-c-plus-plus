/*
2.18 Escriba un programa que pida al usuario que escriba dos enteros, que obtenga los números del usuario e imprima el
número más grande, seguido de las palabras "es más grande". Si los números son iguales, imprima el mensaje "Estos números
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
