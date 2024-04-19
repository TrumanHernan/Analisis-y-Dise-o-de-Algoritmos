Algoritmo Ejercicio4
	definir total,horas,salario,salario_extras,horas_extras Como Real
	salario = 16
	salario_extras = 20
	escribir "cuantas horas trabajo a la semana: "
	leer horas
	si horas <=40 entonces
		total = horas * salario
		escribir "su salario de la semana por ", horas, " trabajadas a la semana es: ",total
	SiNo
		horas_extras = horas - 40
		total = 40 * salario
		salario_extras = horas_extras * salario_extras
		escribir "su salario de la semana por ", horas, " trabajadas a la semana es: ",total + salario_extras
	FinSi
FinAlgoritmo
