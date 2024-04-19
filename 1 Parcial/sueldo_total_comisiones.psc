Algoritmo sueldo_total_comisiones
	definir sueldo_base,comision,sueldo_total como real
	definir nombre como caracter
	escribir "Cual es el nombre del empleado: "
	leer nombre
	definir v1,v2,v3 como real
	escribir "cual es sueldo base: "
	leer sueldo_base
	escribir "de cuanto fue su primer venta: "
	leer v1
	escribir "de cuanto fue su segunda venta: "
	leer v2
	escribir "de cuanto fue su tercer venta: "
	leer v3
	
	comision = (v1+v2+v3) *0.10
	sueldo_total = sueldo_base + comision
	escribir "la comision por las tres ventas realizadas por el empleado ", nombre " es de: ",comision
	escribir "El sueldo total del empleado ",nombre + " es: ", sueldo_total
FinAlgoritmo
