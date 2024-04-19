Algoritmo estacionamiento
	definir minutos, horas, precio_hora,precio_minuto Como real
	precio_hora = 1.50
	precio_minuto = 0.025
	escribir " cuantas horas estuvo estacionado: "
	leer horas
	escribir "cuantos minutos estuvo estacionado: "
	leer minutos
	si  horas >= 0 y minutos >=0 y minutos <= 59 entonces
		total = precio_hora * horas
		total_minutos = minutos * precio_minuto
		total_a_pagar = total + total_minutos
		escribir "el total a pagar por haber estado estacionado ", horas ," horas ", "y ",minutos," minutos es de: ", total_a_pagar, "$"
	SiNo
		escribir " ERROR!!!"
	FinSi
FinAlgoritmo
