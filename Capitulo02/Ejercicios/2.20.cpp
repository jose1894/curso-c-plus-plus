/*
2.20 Escriba un programa que lea el radio de un c�rculo como un n�mero entero y que imprima su di�metro, circunferencia
y �rea. Use el valor constante 3.14159 para p. Realice todos los c�lculos en instrucciones de salida. [Nota: en este cap�tulo s�lo
hemos visto constantes enteras y variables. En el cap�tulo 4 hablaremos sobre los n�meros de punto f lotante; es decir, valores
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
