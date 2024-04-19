#include <iostream>
using namespace std;

int main(){
	int numero,impares,c;
	numero = 1;
	while(numero >= 0){
		cout<<"ingresa un numero: "<<endl;
		cin>>numero;
		if(numero % 2 == 1){
			impares += numero;
		}
		c++;
	}
	cout<<endl;
	cout<<"La suma de los numeros impares es de: "<<impares<<endl;
	return 0;
}
