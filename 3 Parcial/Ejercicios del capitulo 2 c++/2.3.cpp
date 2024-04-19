 /* 2.3 - Escriba una sola instrucción en C++ para realizar cada una de las siguientes tareas
 a) Declarar las variables c, estaEsUnaVariable, q76354 y numero como de tipo int.
 b) Pedir al usuario que introduzca un entero. Termine el mensaje del indicador con un signo de dos puntos (:) seguido 
de un espacio, y deje el cursor posicionado después del espacio.
 c) Recibir un entero como entrada del usuario mediante el teclado, y almacenarlo en la variable entera edad.
 d) Si la variable numero no es igual a 7, mostrar “La variable numero no es igual a 7”.
 e) Imprimir el mensaje "Este es un programa en C++" en una línea.
 f) Imprimir el mensaje "Este es un programa en C++" en dos líneas. La primera línea debe terminar con es un.
 g) Imprimir el mensaje "Este es un programa en C++"; cada palabra se debe escribir en una línea separada.
 h) Imprimir el mensaje "Este es un programa en C++". Separe una palabra de otra mediante un tabulador*/
 
 # include <iostream>
 using namespace std;
 
 int main(){
 	//a 
	int c = 76354;
	//b
	int n1;
	cout<<"Introdusca un numero entero: ";
	cin>>n1;
	//c
	int edad;
	cout<<"Introdusca un numero entero: ";
	cin>>edad;
	//d
	float numero;
	cout<<"Introdusca un numero del 1 al 10: ";
	cin>>numero;
	if (numero != 7){
		cout<<"no es igual a 7"<<endl;
	}
	//e
	cout<<"Este es un programa en C++"<<endl;
	//f
	cout<<"Este es un \n" << "programa en C++"<<endl;
	//g
	cout<<"Este\nes\nun\nprograma\nen\nC++"<<endl;
	//h
	cout<<"Este\tes\tun\tprograma\ten\tC++"<<endl;
	
 	
 	return 0;
 } 
