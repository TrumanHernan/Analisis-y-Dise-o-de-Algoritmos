 /*2.5 - Utilizando las instrucciones que escribió en el ejercicio 2.4, escriba un programa completo que calcule e imprima el 
producto de tres enteros. Agregue comentarios al código donde sea apropiado. */
 # include <iostream>
 using namespace std;
 
 int main(){
 	//Programa que calcula el producto de tres numeros enteros
 	cout<<"---Programa que calcula el producto de tres numeros enteros---"<<endl;
 	int n1,n2,n3,producto;
 	cout<<"Introduce un numero entero: "<<endl;
 	cin>>n1;
	cout<<"Introduce un segundo numero entero: "<<endl;
	cin>>n2;
	cout<<"Introduce un tercer numero entero: "<<endl;
	cin>>n3;
	producto = n1*n2*n3;
	cout<<"El Producto de los tres numeros enteros es de: "<<producto<<endl;
 	
 	return 0;
 } 
