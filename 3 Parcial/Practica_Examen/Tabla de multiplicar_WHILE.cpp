#include <iostream>
using namespace std;

int main(){
	int n;
	int contador = 0;
	cout<<"De que numero quieres saber la tabla de multiplicar: ";cin>>n;
	cout<<endl;
	cout<<"-----Tabla de multiplicar del 1 al 10 del numero "<<n<<"-----"<<endl<<endl;
	while (contador<10){
		contador ++;
		cout<<n<<" X "<<contador<<" = "<<n * contador<<endl;
		
	}
	return 0;
}
