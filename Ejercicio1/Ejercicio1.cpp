#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Introduce un numero por la veces que desee sumar: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los numeros desde 1 hasta " << n << " es " << suma << endl;

    return 0;
}
