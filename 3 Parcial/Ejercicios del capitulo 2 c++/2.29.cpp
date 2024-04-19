/*Utilizando sólo las técnicas que aprendió en este capítulo, escriba un programa que calcule los cuadrados y cubos de los 
números enteros del 0 al 10, y que imprima los valores resultantes en formato de tabla, como se muestra a continuación:*/

#include <iostream>
using namespace std;

int main() {
  // Encabezado de la tabla
  cout << "numero" << "\t"<<"\t" << "cuadrado" <<"\t" << "cubo" << endl;

  // Bucle para calcular y mostrar los cuadrados y cubos del 0 al 10
  for (int i = 0; i <= 10; i++) {
    cout << i << "\t"<<"\t" << i * i << "\t"<<"\t" << i * i * i << endl;
  }

  return 0;
}

