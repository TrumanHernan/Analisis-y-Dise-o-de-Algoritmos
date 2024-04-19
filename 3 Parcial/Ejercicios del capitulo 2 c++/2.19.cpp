/*2.19 - Escriba un programa que reciba tres enteros del teclado e imprima la suma, promedio, producto, menor y mayor de 
esos números. El diálogo de la pantalla debe aparecer de la siguiente manera*/

#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"-----Acontinuacion se le piden tres numeros enteros que sean diferentes:-----"<<endl<<endl;
	cout<<"Introduce un numero: "<<endl;
 	cin>>n1;
	cout<<"Introduce un segundo numero: "<<endl;
	cin>>n2;
	cout<<"Introduce un tercer numero: "<<endl;
	cin>>n3;
	
	cout<<"La Suma es: "<<n1+n2+n3<<endl;
	cout<<"El Promedio es: "<<(n1+n2+n3)/3<<endl;
	cout<<"La Producto es: "<<n1*n2*n3<<endl;
	cout<<"el menor de los tres es: ";
	
	if (n1<n2 && n1<n3){
		cout<<"El numero 1"<<endl;
	}
	else if (n2<n1 && n2<n3){
		cout<<"El numero 2"<<endl;
	}
	else{
		cout<<"El numero 3"<<endl;
	}
	
	
	cout<<"el mayor de los tres es: ";
	if (n1>n2 && n1>n3){
		cout<<"El numero 1"<<endl;
	}
	else if (n2>n1 && n2>n3){
		cout<<"El numero 2"<<endl;
	}
	else{
		cout<<"El numero 3"<<endl;
	}
	
	cout<<endl;
	return 0;
}
