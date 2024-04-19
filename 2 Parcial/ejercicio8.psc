Algoritmo ejercicio8
	definir n1,n2,n3 Como Real
	Escribir "ingrese el valor del numero 1"
	leer n1
	Escribir "ingrese el valor del numero 2"
	leer n2
	Escribir "ingrese el valor del numero 3"
	leer n3
	si n1 > n2 y n1 >n3 Entonces
		escribir "numero mayor es el primero: ",n1
	SiNo
		si  n2 > n1 y n2 > n3 Entonces
			escribir "el numero mayor es el segundo: ",n2
		SiNo
			
			Si n3 > n1 y n3 > n2 Entonces
				escribir "el numero mayor es el tercero: ",n3
			SiNo
				escribir "todos son iguales"
			FinSi
			
			
		FinSi
	FinSi
FinAlgoritmo
