#include <iostream>
using namespace std;

int main(){
	int x;
	int contador = 1;
	cout<<"Ingrese un valor entero: "<<endl;
	cin>>x;
	while (contador <= 10){
		cout<<x<<" X "<<contador<<" = "<<x*contador<<endl;
		contador++;
		
	}
	return 0;
}
