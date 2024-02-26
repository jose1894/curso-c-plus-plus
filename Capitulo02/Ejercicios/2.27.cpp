/*
2.27 He aqu� un adelanto. En este cap�tulo, aprendi� sobre los enteros y el tipo int. C++ tambi�n puede representar letras
may�sculas, min�sculas y una considerable variedad de s�mbolos especiales. C++ utiliza enteros peque�os de manera interna
para representar cada uno de los distintos caracteres. Al conjunto de caracteres que utiliza una computadora, y las correspondientes
representaciones enteras para esos caracteres, se le conoce como el conjunto de caracteres de esa computadora. Podemos
imprimir un car�cter encerr�ndolo entre comillas sencillas, como se muestra a continuaci�n:
cout << 'A'; // imprimir una letra A may�scula
Podemos imprimir el equivalente entero de un car�cter mediante el uso de static_cast, como se muestra a continuaci�n:
cout << static_cast< int >( 'A' ); // imprime 'A' como un entero
A esto se le conoce como operaci�n de conversi�n (en el cap�tulo 4 presentaremos formalmente las conversiones). Cuando
se ejecuta la instrucci�n anterior, imprime el valor 65 (en sistemas que utilizan el conjunto de caracteres ASCII). Escriba un
programa que imprima el equivalente entero de un car�cter escrito en el teclado. Almacene la entrada en una variable de tipo
char. Pruebe su programa varias veces, usando letras may�sculas, min�sculas, d�gitos y caracteres especiales (como $).
*/

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main(){
	char valor;
	
	cout << "Escriba un caracter para conocer su equivalente entero" << endl;
	cin >> valor;
	
	cout << static_cast<int>(valor);
	
	return 0;
}
