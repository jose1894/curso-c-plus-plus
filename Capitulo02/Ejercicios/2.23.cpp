/*
2.23 Escriba un programa que lea cinco enteros y que determine e imprima los enteros mayor y menor en el grupo. Use
solamente las técnicas de programación que aprendió en este capítulo.
*/

#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a,b,c,d,e;
	cout << "Introduzca 5 enteros\n";
	cin >> a >> b >> c >> d >> e;
	
	if ( a > b ){
		if ( a > c){
			if ( a > d){
				if (a > e) {
					cout << "El mayor es " << a << "\n";
				}
			}
		}
	} 
	
	if ( b > a ){
		if ( b > c){
			if ( b > d){
				if (b > e) {
					cout << "El mayor es " << b << "\n";
				}
			}
		}
	}
	
	if ( c > a ){
		if ( c > b){
			if ( c > d){
				if (c > e) {
					cout << "El mayor es " << c << "\n";
				}
			}
		}
	}
	
	if ( d > a ){
		if ( d > b){
			if ( d > c){
				if (d > e) {
					cout << "El mayor es " << d << "\n";
				}
			}
		}
	}
	
	if ( e > a ){
		if ( e > b){
			if ( e > c){
				if (e > d) {
					cout << "El mayor es " << e << "\n";
				}
			}
		}
	}
	
	
	if ( a < b ){
		if ( a < c){
			if ( a < d){
				if (a < e) {
					cout << "El menor es " << a << "\n";
				}
			}
		}
	} 
	
	if ( b < a ){
		if ( b < c){
			if ( b < d){
				if (b < e) {
					cout << "El menor es " << b << "\n";
				}
			}
		}
	}
	
	if ( c < a ){
		if ( c < b){
			if ( c < d){
				if (c < e) {
					cout << "El menor es " << c << "\n";
				}
			}
		}
	}
	
	if ( d < a ){
		if ( d < b){
			if ( d < c){
				if (d < e) {
					cout << "El menor es " << d << "\n";
				}
			}
		}
	}
	
	if ( e < a ){
		if ( e < b){
			if ( e < c){
				if (e < d) {
					cout << "El menor es " << e << "\n";
				}
			}
		}
	}                
	return 0;
}
