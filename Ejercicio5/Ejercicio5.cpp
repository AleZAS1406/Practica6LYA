#include <iostream>

using namespace std;

int main() {
    double notas[8], suma = 0, promedio;
    int aprobados = 0, reprobados = 0;

    for (int i = 0; i < 8; i++) {
        cout << "Introduce la nota del estudiante " << i+1 << ": ";
        cin >> notas[i];
        suma += notas[i];

        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = suma / 8;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}