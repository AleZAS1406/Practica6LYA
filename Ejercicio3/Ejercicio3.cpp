# include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 1; i < 100; i++) {
        suma += i*i;
    }
    cout << "La suma de los dos cuadrados de los numeros desde 1 hasta 100 es " << suma << endl;

    return 0;

}