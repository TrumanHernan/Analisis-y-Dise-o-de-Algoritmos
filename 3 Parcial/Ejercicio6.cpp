/*2.20 - Escriba un programa que lea el radio de un círculo como un número entero y que imprima su diámetro, circunferencia 
y área. Use el valor constante 3.14159 para p. Realice todos los cálculos en instrucciones de salida. [Nota: en este capítulo sólo 
hemos visto constantes enteras y variables. En el capítulo 4 hablaremos sobre los números de punto f lotante; es decir, valores
que pueden tener puntos decimales.*/

#include <iostream>
using namespace std;

int main(){
	float radio;
	float circuferencia, diametro, area; 
	const float pi = 3.14159;
	
	cout<<"Cuanto es el radio del circulo: ";
	cin >> radio;
	
	circuferencia = 2 * pi * radio;
	diametro = 2 * radio;
	area = pi * radio * radio;
	
	cout<<"La Circuferencia del circulo es: "<<circuferencia<<endl;
	cout<<"El Diametro del circulo es: "<<diametro<<endl;
	cout<<"La Area del circulo es: "<<area<<endl;
	

	return 0;
}
