#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,exp;
	cout<<"Numero que quieres elevar: ";cin>>n;
	
	while(n >= 0){
		if (n == 0 || n == 1 ){
			cout<<"No se pueden elevar estos numeros intenta con un numero mayor a 1 "<<endl;
			cout<<endl;
			cout<<"Numero que quieres elevar: ";cin>>n;
		}
	
		else{
			cout<<"Exponente al que quieres elevar el numero: ";cin>>exp;
			cout<<"El resultado de "<<n<<" elevado por la potencia de "<<exp<<" es de: "<<pow(n,exp)<<endl;
			cout<<endl;
			cout<<"Numero que quieres elevar: ";cin>>n;
		}
	}
	return 0;
}
