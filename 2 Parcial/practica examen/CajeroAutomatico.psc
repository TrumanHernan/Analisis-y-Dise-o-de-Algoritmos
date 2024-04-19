Algoritmo CajeroAutomatico
	Definir  saldo, deposito, retiro, total,opc Como Real
	
	saldo  = 1000
	
	escribir "eliga una opcion: "
	escribir "1.verificar saldo"
	escribir "2.depositar"
	escribir "3.retirar"
	leer opc
	
	si opc == 1 Entonces
		escribir saldo
	SiNo
		si opc == 2 Entonces
			Escribir "cuanto quieres depositar: "
			leer deposito
			total = saldo + deposito
			Escribir total
		SiNo
			si opc == 3 Entonces
				Escribir "cuanto quieres retirar: "
				leer retiro
				si retiro > saldo Entonces
					escribir "Error no tiene suficiente saldo"
				SiNo
					total = saldo - retiro
					Escribir total
				FinSi
			SiNo
				escribir "numero no valido"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
