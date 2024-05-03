#include <iostream>

using namespace std;

int main() {
    double notas[10], suma = 0, promedio;

    for (int i = 0; i < 10; i++) {
        cout << "Introduce la nota del estudiante " << i+1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    promedio = suma / 10;
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}