#include <iostream>
using namespace std;

int main(){
	int contrasena,intentos,clave;
	intentos = 4;
	clave = 4567;
	cout<<"Ingresa una contraseña numerica: (Tienes 5 intentos)"<<endl;
	cin>>contrasena;
	if (contrasena == clave){
			cout<<"Puedes acceder"<<endl;
		}
		else{
			while(contrasena != clave){
	
			cout<<"Ingresa una contraseña numerica: "<<"(Tienes "<<(intentos)--<<" intentos)"<<endl;
			cin>>contrasena;
			if (contrasena == clave){
			cout<<"Puedes acceder"<<endl;
			break;
		}
			else if (intentos == 0){
				cout<<"Se te acabaron los intentos"<<endl;
				break;
			}
	
		
		
	}
		}
	
	return 0;
}
