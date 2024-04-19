#include <iostream>
using namespace std;

int main(){
	int n1,n2;
	cout<<"Introduzca el primer numero: ";cin>>n1;
	cout<<"Introduzca el segundo numero: ";cin>>n2;
	
	if (n1>n2){
		cout<<"El numero 1: "<<n1<<" es el mayor";
	}
	else if(n2>n1){
		cout<<"El numero 2: "<<n2<<" es el mayor";
	}
	else {
		cout<<"Los numeros son iguales";
	}
	return 0;
	
}

