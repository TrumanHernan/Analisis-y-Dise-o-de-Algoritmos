Algoritmo Ejercicio5
	definir a,f, m Como Caracter
	escribir "introduzca la letra f si es mujer y la m si es hombre"
	leer a
	
	si a == "f" o a == "F" Entonces
		escribir "Femenina"
	SiNo
		si a == "m" o a == "M" Entonces
			escribir "Masculino"
			SiNo
				escribir "ERRROR!!!"
		FinSi
		
	FinSi
FinAlgoritmo
