#include <iostream>
using namespace std;

int main(){
	int numero,pares;
	numero = 28;
	while(numero >10 ){
		numero--;
		if (numero % 2 != 1){
			cout<<numero<<endl;
			pares += numero;
			
		}
	}
	pares = pares -1;
	cout<<endl;
	cout<<"La suma de los numeros pares es de: "<<pares<<endl;
	return 0;
}
