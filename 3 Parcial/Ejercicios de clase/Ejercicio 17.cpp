//ejercicio17
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int c=0;
	cout<<"numero"<<setw(15)<<"cuadrado"<<setw(10)<<"cubo"<<endl;
	while ( c <= 10)
	{
		cout<<c<<setw(15)<<c*c<<setw(15)<<c*c*c<<endl;
		c++;
	}
	return 0;
}
