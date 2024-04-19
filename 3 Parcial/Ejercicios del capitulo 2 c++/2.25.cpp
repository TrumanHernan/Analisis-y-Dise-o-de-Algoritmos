/*.25 - Escriba un programa que lea dos enteros, determine si el primero es un múltiplo del segundo e imprima el resultado. 
[Sugerencia: use el operador de módulo.]*/

# include <iostream>
 using namespace std;
 
 int main(){
 	//Programa que determina si el primer numero es multiplo del segundo.
 	cout<<"---Programa que determina si el primer numero es multiplo del segundo---"<<endl;
    int a,b;
 	cout<<"Introduce un numero entero: "<<endl;
 	cin>>a;
 	cout<<"Introduce un segundo numero entero: "<<endl;
 	cin>>b;
 	if (a % b == 0){
 		cout<<"El numero "<<a<< " Es multiplo del numero: "<<b<<endl;
	 }
	 else{
	 	cout<<"El numero "<<a<< " No es multiplo del numero: "<<b<<endl;
	 }
 	
 	return 0;
 } 
