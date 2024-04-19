#include <iostream>
using namespace std;

int main(){
	float ht,salario,salario_extra,sueldo,sueldo_extra,ht_extras;
	salario = 10;
	cout<<"cuantas horas trabajo en la semana: ";
	cin >> ht;
	if (ht <= 40 && ht>0){
		sueldo = ht * salario;
		cout<<"Su salario por haber trabajado "<<ht<<" horas es de: "<<sueldo<<endl;
	}
	else if(ht>40){
		ht_extras = ht - 40;
		salario_extra = ht_extras *  15;
		sueldo = 40 * 10;
		sueldo_extra = sueldo + salario_extra;
		cout<<"Su salario por haber trabajado "<<40+ht_extras<<" horas es de: "<<sueldo_extra<<endl;
	}
	else{
		cout<<"ERROR!!! Introduzca por lo menos 1 hora de trabajo "<<endl;
	}
	return 0;
}
