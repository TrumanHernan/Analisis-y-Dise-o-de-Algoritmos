#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese el numero de la tabla que desea multiplicar: ";cin>>n;
	for (int contador = 1; contador <=10; contador++){
		cout<<n<<" X "<<contador<<" = "<<n*contador<<endl;
	}
	return 0;
}
