#include <iostream>
using namespace std;


int main(){
	
	float ss, ventas; 
	cout<<"Use -1 para poder salir"<<endl<<endl;
	cout<<"Cuanto vendio la semana pasada: ";cin>>ventas;
	while (ventas != -1){
		ss = 200 + (ventas * 0.09);
		cout<<"Su salario de la semana es de: "<<"$"<<ss<<endl;
		
		cout<<endl;
		cout<<"Cuanto vendio la semana pasada: ";cin>>ventas;
	}
	return 0;
}
