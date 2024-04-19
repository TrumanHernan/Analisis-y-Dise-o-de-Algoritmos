/*2.18 - Escriba un programa que pida al usuario que escriba dos enteros, que obtenga los números del usuario e imprima el 
número más grande, seguido de las palabras "es más grande". Si los números son iguales, imprima el mensaje "Estos números 
son iguales."*/
#include <iostream>
using namespace std;

int main(){
	double n1,n2;
	cout<<"Introduce un numero: "<<endl;
 	cin>>n1;
	cout<<"Introduce un segundo numero: "<<endl;
	cin>>n2;
	
	if (n1>n2){
		cout<<"El numero 1 es el mas Grande "<<n1<<endl;
	}
	else if (n2>n1){
		cout<<"El numero 2 es el mas Grande "<<n2<<endl;
	}
	else{
		cout<<"Los numeros son Iguales";
	}

	return 0;
}
