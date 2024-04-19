/*2.23 - Escriba un programa que lea cinco enteros y que determine e imprima los enteros mayor y menor en el grupo. Use 
solamente las técnicas de programación que aprendió en este capítulo*/

#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3,n4,n5,mayor,menor;
	
	cout<<"-----Acontinuacion se le piden cinco numeros enteros que sean diferentes:-----"<<endl<<endl;
	cout<<"Introduce un numero: "<<endl;
 	cin>>n1;
	cout<<"Introduce un segundo numero: "<<endl;
	cin>>n2;
	cout<<"Introduce un tercer numero: "<<endl;
	cin>>n3;
	cout<<"Introduce un cuarto numero: "<<endl;
	cin>>n4;
	cout<<"Introduce un quinto numero: "<<endl;
	cin>>n5;
	
	menor = n1;
	mayor = n2;
	

  if (n2 > mayor) {
    mayor = n2;
  }
  if (n3 > mayor) {
    mayor = n3;
  }
  if (n4 > mayor) {
    mayor = n4;
  }
  if (n5 > mayor) {
    mayor = n5;
  }

  
  if (n2 < menor) {
    menor = n2;
  }
  
  if (n3 < menor) {
    menor = n3;
  }
  if (n4 < menor) {
    menor = n4;
  }
  if (n5 < menor) {
    menor = n5;
  }
cout << "El numero menor es: " << menor <<endl;
cout << "El numero mayor es: " << mayor <<endl;
	return 0;
}
