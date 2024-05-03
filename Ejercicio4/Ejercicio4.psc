Algoritmo Ejercicio4
    Definir notas Como Real;
    Definir suma Como Real;
    Definir promedio Como Real;
    Definir i Como Entero;
	
    suma <- 0;
	
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        Escribir "Introduce la nota del estudiante ", i, ":";
        Leer i;
        suma <- suma + [i];
    Fin Para
	
    promedio <- suma / 10;
	
    Escribir "El promedio general de la sección es ", promedio;
FinAlgoritmo
