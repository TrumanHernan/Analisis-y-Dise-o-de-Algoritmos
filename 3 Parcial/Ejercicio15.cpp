#include <iostream>
using namespace std;

int main(){
	int n1,n2,suma,resta,promedio,producto;
	cout<<"Introduce un numero entero (-1 para salir)"<<endl;
	cin>>n1;
	
	
	while(n1!= -1){
		cout<<"Introduce un segundo numero entero: "<<endl;
		cin>>n2;
		suma = n1+n2;
		resta = n1-n2;
		promedio = (n1+n2)/2;
		producto = n1*n2;
		
		cout<<"La suma es: "<<suma<<endl;
		cout<<"La resta es: "<<resta<<endl;
		cout<<"El promedio es: "<<promedio<<endl;
		cout<<"El producto es: "<<producto<<endl;
		
		if (n1>n2){
			cout<<"El numero 1 es el mayor"<<endl;
			cout<<"El numero 2 es el menor"<<endl;
		}
		else{
			if (n1<n2){
			cout<<"El numero 2 es el mayor"<<endl;
			cout<<"El numero 1 es el menor"<<endl;
		
		}
		else {
			if(n1==n2){
				cout<<"Los numeros son iguales"<<endl;
		}
		
		}
		}
	cout<<endl;
	cout<<"Introduce un numero entero (-1 para salir)"<<endl;
	cin>>n1;
}

	return 0;
}
