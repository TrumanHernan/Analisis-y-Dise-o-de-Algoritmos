#include <iostream>
using namespace std;

int main(){
	int km,l,kpl;
	bool continuar = true;
	cout<<"---USE -1 PARA PODER SALIR---"<<endl<<endl;
	cout<<"Cuantos kilometros condujo: ";cin>>km;
	cout<<"Cuantos litros de gasolina uso: ";cin>>l;
	while (continuar){
		if (km == -1 || l == -1){
			continuar = false;
		}
		else if(l > km){
			cout<<"ERROR!!! el numero divisor no puede ser mas grande que el dividiendo"<<endl;
			cout<<endl;
			cout<<"Cuantos kilometros condujo: ";cin>>km;
			cout<<"Cuantos litros de gasolina uso: ";cin>>l;
		}
		else if (l == 0){
			cout<<"ERROR!!! no se puede dividir entre 0"<<endl;
			cout<<endl;
			cout<<"Cuantos kilometros condujo: ";cin>>km;
			cout<<"Cuantos litros de gasolina uso: ";cin>>l;
		}
		else{
			kpl = km/l;
			cout<<"El total de kilometro por litro es de: "<<kpl;
			
			cout<<endl<<endl;
			cout<<"Cuantos kilometros condujo: ";cin>>km;
			cout<<"Cuantos litros de gasolina uso: ";cin>>l;
		}
		
		
	}
	
	return 0;
}
