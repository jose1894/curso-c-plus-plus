/*
2.20 Escriba un programa que lea el radio de un círculo como un número entero y que imprima su diámetro, circunferencia
y área. Use el valor constante 3.14159 para p. Realice todos los cálculos en instrucciones de salida. [Nota: en este capítulo sólo
hemos visto constantes enteras y variables. En el capítulo 4 hablaremos sobre los números de punto f lotante; es decir, valores
que pueden tener puntos decimales.]
*/

#include <iostream>

using std::cin;
using std::cout;

int main(){
	int radio;
	
	cout << "Escriba el radio de un circulo\n";
	cin >> radio;
	
	cout << "El diametro es: " << 2 * radio << "\n";
	cout << "La circunferencia es: " << 3.14159 * 2 * radio << "\n";	
	cout << "El area es: " << 3.14159 * radio * radio;	
	return 0;
}
