/*2.17 - Escriba un programa que imprima los n�meros del 1 al 4 en la misma l�nea, con cada par de n�meros adyacentes 
separado por un espacio. Haga esto de varias formas:
a) Utilizando una instrucci�n con un operador de inserci�n de f lujo.
 b) Utilizando una instrucci�n con cuatro operadores de inserci�n de f lujo.
 c) Utilizando cuatro instrucciones*/

#include <iostream>
using namespace std;

int main(){
	//a
	cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
	//b
	cout<<1<<" ";
	cout<<2<<" ";
	cout<<3<<" ";
	cout<<4<<" ";
	cout<<"\n";
	//c
	cout<<1<<" ";
	cout<<2<<" ";
	cout<<3<<" ";
	cout<<4<<" ";
	return 0;
}
