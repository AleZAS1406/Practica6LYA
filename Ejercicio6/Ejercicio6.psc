Proceso Ejercicio6
Definir suma Como Entero;
Definir i Como Entero;

	suma <- 0;
Para i <- 100 Hasta 200 Con Paso 1 Hacer
	Si i MOD 2 == 0 Entonces
		suma <- suma + i;
	FinSi
Fin Para
	
	Escribir "La suma de los n�meros pares entre 100 y 200 es ", suma;

FinProceso
