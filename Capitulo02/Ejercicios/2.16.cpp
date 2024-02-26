/*2.16 Escriba un programa que pida al usuario que escriba dos números, que obtenga los números del usuario e imprima la
suma, producto, diferencia y cociente de los números.*/
#include <iostream>

using std::cin;
using std::cout;

int main(){
	int a,b;
	cout << "Escriba dos numeros\n";
	cin >> a >> b;
	cout << "Suma: " << a + b << "\n";
	cout << "Producto: " << a * b << "\n";
	cout << "Diferencia: " << a - b << "\n";
	cout << "Cociente: " << a / b << "\n";
	return 0;
}
