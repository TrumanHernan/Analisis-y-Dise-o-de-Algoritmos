/*2.24 - Escriba un programa que lea un entero y que determine e imprima si es impar o par. [Sugerencia: 
use el operador módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de dos deja un residuo 
de cero cuando se divide entre dos.]*/

 # include <iostream>
 using namespace std;
 
 int main(){
 	//Programa que determina si un numero es par o impar.
 	cout<<"---Programa que determina si un numero es par o impar---"<<endl;
 	int n1;
 	cout<<"Introduce un numero entero: "<<endl;
 	cin>>n1;
 	if (n1 % 2 == 0){
 		cout<<"El numero "<<n1<< " es par";
	 }
	 else{
	 	cout<<"El numero "<<n1<< " es impar";
	 }
 	
 	return 0;
 } 
