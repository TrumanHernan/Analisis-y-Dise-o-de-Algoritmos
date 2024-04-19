Algoritmo examen
	definir op Como Entero
	definir base,altura,lado,radio Como Real
	
	escribir "---Menu de opciones---"
	escribir "eliga una figura que quiera saber su area de las siguinetes opciones: "
	Escribir "1.Tringulo"
	Escribir "2.Cuadrado"
	Escribir "3.Circulo"
	leer op
	
	si op == 1 Entonces
		escribir "escriba la base del triangulo"
		leer base
		escribir "escriba la altura del triangulo"
		leer altura
		area = (base*altura)/2
		Escribir "El area del triangulo es de: ",area
	SiNo
		
		si op == 2 Entonces
			escribir "escriba el lado del cuadrado"
			leer lado
			area = lado * lado
			Escribir "El area del cuadrado es de: ",area
		SiNo
			si op == 3 Entonces
				escribir "escriba el radio del circulo"
				leer radio
				area = PI * radio * radio
				Escribir "El area del circulo es de: ",area
			SiNo
				escribir "ERROR!!!"
			FinSi
			
		
		
		FinSi
	FinSi
	
FinAlgoritmo
