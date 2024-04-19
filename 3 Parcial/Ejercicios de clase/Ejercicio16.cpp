#include <iostream>
using namespace std;

int main() 
{
    int total = 0;
    int calificacion = 0;
    int contador = 0;
    int promedio = 0;

    while (calificacion != -1) 
	{
        cout << "Ingrese la calificacion (" << contador + 1 << "): ";
        cin >> calificacion;

        if (calificacion == -1) 
		{
            break; 
        } 
		else 
		{
            total += calificacion;
            contador++;
        }
    }

    if (contador != 0) 
	{ 
        promedio = total / contador;
        cout << "El promedio es: " << promedio << endl;
    } 
	else 
	{
        cout << "No se ingresaron calificaciones." << endl;
    }

    return 0;
}
