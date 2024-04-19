#include <iostream>
using namespace std;

int main(){
	int num;
	
	for (int i = 0; i<5; i++){
		cout<<"Ingrese un numero entre el 1 y el 30: "<<endl;
		cin>>num;
		
		if (num < 1 || num > 30){
			cout<<"Numero no valido!!! Intentelo de nuevo"<<endl;
			i--;
			continue;	
		}
		else{
			for (int j = 0; j < num; ++j){
				cout<<"*";
				
			}
		}
		
	cout<<endl;
	}
	return 0;
}
