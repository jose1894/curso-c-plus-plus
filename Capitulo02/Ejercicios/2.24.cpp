/*
2.24 Escriba un programa que lea un entero y que determine e imprima si es impar o par. [Sugerencia: use el operador módulo.
Un número par es un múltiplo de dos. Cualquier múltiplo de dos deja un residuo de cero cuando se divide entre dos.]
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int entero;
	
	cout << "Escriba un entero para determinar si es para o impar\n";
	cin >>  entero;
	
	if(entero % 2 == 0){
		cout << "El entero " << entero << " es par" << endl;
	}
	
	if(entero % 2 != 0){
		cout << "El entero " << entero  << " es impar" << endl;
	}
	
	return 0;
}
