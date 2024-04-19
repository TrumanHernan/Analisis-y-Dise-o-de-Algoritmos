/*2.16 
- Escriba un programa que pida al usuario que escriba dos números, que obtenga los números del usuario e imprima la 
suma, producto, diferencia y cociente de los números*/

#include <iostream>
using namespace std;

int main(){
	double n1,n2;
	cout<<"Introduce un numero entero: "<<endl;
 	cin>>n1;
	cout<<"Introduce un segundo numero entero: "<<endl;
	cin>>n2;
	cout<<"La Suma es: "<<n1+n2<<endl;
	cout<<"El Producto es: "<<n1*n2<<endl;
	cout<<"La Diferencia es: "<<n1-n2<<endl;
	cout<<"El cociente es: "<<n1/n2<<endl;
	return 0;
}
