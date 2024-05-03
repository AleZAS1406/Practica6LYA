Proceso Ejercicio5
	
	Definir notas Como Real;
	Definir suma Como Real;
	Definir promedio Como Real;
	Definir aprobados Como Entero;
	Definir reprobados Como Entero;
	Definir i Como Entero;
	
	suma <- 0;
	aprobados <- 0;
	reprobados <- 0;
	
	Para i <- 1 Hasta 8 Con Paso 1 Hacer Escribir "Introduce la nota del estudiante ", i, ":";
		Leer notas;
		suma <- suma + notas;
		si notas >= 70 Entonces
			aprobados <- aprobados + 1;
		sino 
			reprobados <- reprobados + 1;
		FinSi
	FinPara
	
	promedio <- suma / 8;
	
	Escribir "Cantidad de alumnos aprobados: ", aprobados;
	Escribir "Cantidad de alumnos reprobados: ", reprobados;
	Escribir "Promedio general del grupo: ", promedio;
FinProceso
