 /*2.6 - Identifique y corrija los errores en cada una de las siguientes instrucciones:
 a) if ( c < 7 );
 cout << "c es menor que 7\n";
 b) if ( c => 7 )
 cout << "c es igual o mayor que 7\n"*/
 
 # include <iostream>
 using namespace std;
 
 int main(){
//a) if ( c < 7 );
//cout << "c es menor que 7\n";
cout<<"---CORREGIDO---"<<endl;
double c = 7;
if ( c < 7 ){
	cout << "c es menor que 7\n"<<endl;
}

if ( c >= 7 ) {
	cout << "c es igual o mayor que 7\n"<<endl;
}
 	return 0;
 } 
