/*
2.29 Utilizando sólo las técnicas que aprendió en este capítulo, escriba un programa que calcule los cuadrados y cubos de los
números enteros del 0 al 10, y que imprima los valores resultantes en formato de tabla, como se muestra a continuación:
numero cuadrado cubo
0 0 0
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
6 36 216
7 49 343
8 64 512
9 81 729
10 100 1000*/

#include <iostream>
using std::cout;
using std::endl;

int main(){
	cout << "0   0    0" << endl;
	cout << 1 << "   " << 1 * 1 << "    " << 1 * 1 * 1 << endl;	
	cout << 2 << "   " << 2 * 2 << "    " << 2 * 2 * 2 << endl;
	cout << 3 << "   " << 3 * 3 << "    " << 3 * 3 * 3 << endl;	
	cout << 4 << "   " << 4 * 4 << "   " << 4 * 4 * 4 << endl;
	cout << 5 << "   " << 5 * 5 << "   " << 5 * 5 * 5 << endl;	
	cout << 6 << "   " << 6 * 6 << "   " << 6 * 6 * 6 << endl;
	cout << 7 << "   " << 7 * 7 << "   " << 7 * 7 * 7 << endl;	
	cout << 8 << "   " << 8 * 8 << "   " << 8 * 8 * 8 << endl;
	cout << 9 << "   " << 9 * 9 << "   " << 9 * 9 * 9 << endl;	
	cout << 10 << "  " << 10 * 10 << "  " << 10 * 10 * 10 << endl;
	return 0;
}
