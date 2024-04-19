Algoritmo sin_titulo
	definir bolita Como Caracter
	Definir compra Como Real
	Escribir "de cuanto fue su compra: "
	leer compra
	Escribir "que color de bolita quiere: "
	escribir "1.blanca"
	escribir "2.verde"
	escribir "3.amarilla"
	escribir "4.azul"
	Escribir "5.roja"
	leer  bolita
	
	si bolita == "1" Entonces
		Escribir "no tiene descuento"
		Escribir "su compra con el descuento aplicado queda en:", compra
	SiNo
		si bolita == "2" Entonces
			
			descuento = compra * 0.10
			Escribir "su descuento es de:", descuento
			total = compra - descuento
			Escribir "su compra con el descuento aplicado queda en:", total
		SiNo
				si bolita == "3" Entonces
					descuento = compra * 0.25
					Escribir "su descuento es de:", descuento
					total = compra - descuento
					Escribir "su compra con el descuento aplicado queda en:", total
				SiNo
					si bolita == "4" Entonces
						descuento = compra * 0.50
						Escribir "su descuento es de:", descuento
						total = compra - descuento
						Escribir "su compra con el descuento aplicado queda en:", total
					SiNo
						si bolita == "5" Entonces
							descuento = compra 
							Escribir "su descuento es de:", descuento
							total =  compra - descuento
							Escribir "su compra con el descuento aplicado queda en:", total
						SiNo
							escribir "ERROR!!!"
					FinSi
					
					
					FinSi
				FinSi
			FinSi
		FinSi
		
	
FinAlgoritmo
