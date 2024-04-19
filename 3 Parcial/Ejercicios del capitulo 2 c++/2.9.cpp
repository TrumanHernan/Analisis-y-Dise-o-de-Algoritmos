/*2.9 - Escriba una sola instrucción o línea en C++ que realice cada una de las siguientes tareas:
 a) Imprimir el mensaje "Escriba dos numeros".
 b) Asignar el producto de las variables b y c a la variable a.
 c) Indicar que un programa va a realizar un cálculo de nómina (es decir, usar texto que ayude a documentar un programa).
 d) Recibir tres valores de entrada del teclado y colocarlos en las variables enteras a, b y c*/

 # include <iostream>
 using namespace std;
 
 int main(){
 	//a
 	cout<<"Escriba dos numeros"<<endl;
 	//b
 	float b = 8, c = 7;
 	float a = b*c;
 	cout<<"El producto de b y c es de: "<<a<<endl;
 	//c
 	//Este es un programa va a realizar un cálculo de nómina
 	cout<<"Este es un programa va a realizar un calculo de nomina"<<endl;
 	//d
 	cout<<"Introduce un numero entero: "<<endl;
 	cin>>a;
	cout<<"Introduce un segundo numero entero: "<<endl;
	cin>>b;
	cout<<"Introduce un tercer numero entero: "<<endl;
	cin>>c;
 	return 0;
 	
 } 

