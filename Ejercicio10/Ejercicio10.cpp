#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // matriz[filas][columnas]
    int matriz1[3][3];

    // Entrada matriz normal
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz A" << endl;
            cout << "Ingresa un numero, fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matrizA[i][j];
        }

        cout << endl;
    }

    // Salida matriz normal
    cout << endl
         << "Imprimiendo matriz A..." << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrizA[i][j];
            cout << "\t";
        }
        cout << endl
             << endl;
    }
    cout << endl;

    //Transposicion de matriz
    cout << endl
         << "Matriz transpuesta: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrizA[j][i];
            cout << "\t";
        }
        cout << endl
             << endl;
    }
    return 0;
}
