/*
2.27 He aquí un adelanto. En este capítulo, aprendió sobre los enteros y el tipo int. C++ también puede representar letras
mayúsculas, minúsculas y una considerable variedad de símbolos especiales. C++ utiliza enteros pequeños de manera interna
para representar cada uno de los distintos caracteres. Al conjunto de caracteres que utiliza una computadora, y las correspondientes
representaciones enteras para esos caracteres, se le conoce como el conjunto de caracteres de esa computadora. Podemos
imprimir un carácter encerrándolo entre comillas sencillas, como se muestra a continuación:
cout << 'A'; // imprimir una letra A mayúscula
Podemos imprimir el equivalente entero de un carácter mediante el uso de static_cast, como se muestra a continuación:
cout << static_cast< int >( 'A' ); // imprime 'A' como un entero
A esto se le conoce como operación de conversión (en el capítulo 4 presentaremos formalmente las conversiones). Cuando
se ejecuta la instrucción anterior, imprime el valor 65 (en sistemas que utilizan el conjunto de caracteres ASCII). Escriba un
programa que imprima el equivalente entero de un carácter escrito en el teclado. Almacene la entrada en una variable de tipo
char. Pruebe su programa varias veces, usando letras mayúsculas, minúsculas, dígitos y caracteres especiales (como $).
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
