/*
2.17 Escriba un programa que imprima los números del 1 al 4 en la misma línea, con cada par de números adyacentes
separado por un espacio. Haga esto de varias formas:
 a) Utilizando una instrucción con un operador de inserción de f lujo.
 b) Utilizando una instrucción con cuatro operadores de inserción de f lujo.
 c) Utilizando cuatro instrucciones
*/

#include <iostream>

using std::cout;

int main(){
	//Utilizando una instrucción con un operador de inserción de f lujo.
	cout << "1 2 3 4\n";
	cout << "1 " << "2 " << "3 " << "4\n";
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4\n";
	
	return 0;
}
