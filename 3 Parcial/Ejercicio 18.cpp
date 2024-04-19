//ejercicio18
#include <iostream>
using namespace std;
int main ()
{
	int cont=1;
	int suma=0;
	while ( cont <= 100)
	{
		cout <<"Valor actual:"<<cont<<endl;
		suma = suma + cont;
		cont ++;
	}
	cout<<endl<<"La suma de los numeros del 1 al 100 es :"<<suma<<endl;
	return 0;
}
