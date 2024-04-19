Algoritmo sin_titulo
	definir p1,p2,p3,p4,p5, cantidad,total Como real
	definir producto Como Entero
	p1 = 2.98
	p2 = 4.50
	p3 = 9.98
	p4 = 4.49
	p5 = 6.87
	
	escribir "--- OPCIONES ---"
	escribir "producto1 = 2.98"
	escribir "producto2 = 4.50"
	escribir "producto3 = 9.98"
	escribir "producto4 = 4.49"
	escribir "producto5 = 6.87"
	
	Escribir "numero del producto comprado: "
	leer producto
	escribir "cantidad vendida: "
	leer cantidad
	
	si producto == 1 Entonces
		total = p1 * cantidad
		Escribir "su total a pagar es: ",total
	SiNo
		si producto == 2 Entonces
			total = p2 * cantidad
			Escribir "su total a pagar es: ",total
		SiNo
			si producto == 3 Entonces
				total = p3 * cantidad
				Escribir "su total a pagar es: ",total
			SiNo
				si producto == 4 Entonces
						total = p4 * cantidad
						Escribir "su total a pagar es: ",total
					SiNo
						si producto == 3 Entonces
								total = p3 * cantidad
								Escribir "su total a pagar es: ",total
							SiNo
								escribir "Numero de producto no valido!!!"
							
						FinSi
			FinSi
		FinSi
	FinSi
FinSi

	
FinAlgoritmo
