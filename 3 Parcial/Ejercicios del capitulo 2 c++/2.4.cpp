 /*2.4 - Escriba una declaración (o comentario) para realizar cada una de las siguientes tareas:
 a) Indicar que un programa calculará el producto de tres enteros.
 b) Declarar las variables x, y, z y resultado de tipo int (en instrucciones separadas).
 c) Pedir al usuario que escriba tres enteros.
 d) Leer tres enteros del usuario y almacenarlos en las variables x, y y z.
 e) Calcular el producto de los tres enteros contenidos en las variables x, y y z, y asignar el resultado a la variable resultado.
 f) Imprimir "El producto es ", seguido del valor de la variable resultado.
 g) Devolver un valor de main, indicando que el programa terminó correctamente.*/
 # include <iostream>
 using namespace std;
 
 int main(){
 	//a
 	cout<<"este es un programa que calculara el producto de tres enteros."<<endl;
 	//b
 	int x;
 	int y;
 	int z;
 	int resultado;
 	//c
 	cout<<"Introduce un numero entero: "<<endl;
	cout<<"Introduce un segundo numero entero: "<<endl;
	cout<<"Introduce un tercer numero entero: "<<endl;
	//d
	cout<<"Introduce un numero entero: "<<endl;
	cin>>x;
	cout<<"Introduce un segundo numero entero: "<<endl;
	cin>>y;
	cout<<"Introduce un tercer numero entero: "<<endl;
	cin>>z;
	//e
	resultado = x*y*z; 
	//f
	cout<<"El Producto es: "<<resultado<<endl;
	//g
	return 0;
 } 
