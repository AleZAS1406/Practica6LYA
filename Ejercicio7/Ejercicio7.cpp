#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa la longitud de los vectores: ";
    cin >> n;

    int vec1[n], vec2[n], vec3[n];

    cout << "Ingresa los elementos del primer vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    cout << "Ingresa los elementos del segundo vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    for (int i = 0; i < n; i++) {
        vec3[i] = vec1[i] + vec2[i];
    }

    cout << "La suma de los vectores es: ";
    for (int i = 0; i < n; i++) {
        cout << vec3[i] << " ";
    }
    cout << endl;

    return 0;
}