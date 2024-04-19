#include <iostream>
using namespace std;

int main(){
	int numero,pares;
	for(numero = 26; numero >=10; numero--){
		if(numero % 2 == 0){		
			pares += numero;
			cout<<numero<<endl;
			}	
		}
	pares = pares -1;
	cout<<endl;
	cout<<"La suma de los numeros pares es de: "<<pares<<endl;
	
	return 0;
}
