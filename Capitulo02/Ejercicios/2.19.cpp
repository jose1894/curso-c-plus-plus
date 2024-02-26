/*
2.19 Escriba un programa que reciba tres enteros del teclado e imprima la suma, promedio, producto, menor y mayor de
esos números. El diálogo de la pantalla debe aparecer de la siguiente manera:
Introduzca tres enteros distintos: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El menor es 13
El mayor es 27
*/

#include <iostream>
 
using std::cin;
using std::cout;

int main(){
	int a, b, c;
	
	cout << "Introduzca tres enteros distintos:\n";
	cin >> a >> b >> c;
	
	cout << "La suma " << a + b + c << "\n";
	cout << "El promedio es " << (a + b + c)/ 3 << "\n";
	cout << "El producto es " << (a * b * c) << "\n";
	
	if( a < b && a < c ){
		cout << "El menor es " << a << "\n";
	}
	
	if( a > b && b < c ){
		cout << "El menor es " << b << "\n";
	}
	
	if( c < b && a > c ){
		cout << "El menor es " << c << "\n";
	}
	
	if( a > b && a > c ){
		cout << "El mayor es " << a;
	}
	
	if( a < b && b > c ){
		cout << "El mayor es " << b;
	}
	
	if( c > b && a < c ){
		cout << "El mayor es " << c;
	}
	
	return 0;
}
