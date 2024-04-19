Algoritmo Ejercicio6
	definir compra,descuento,total Como Real
	definir edad Como Entero
	
	escribir "Cuanto gasto: "
	leer compra
	escribir "cual es su edad: "
	leer edad
	
	si edad >= 60 Entonces
		descuento = compra *0.25
		escribir "su descuento por la tercera edad es de: ",descuento
		total = compra - descuento
		escribir "Su pago total es de: ",total
	SiNo
		Escribir "su compra fue de: ",compra, " no aplica el descuento porque no es de la tercera edad"
	FinSi
	
	
FinAlgoritmo
