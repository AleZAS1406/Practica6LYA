#include <iostream>
using namespace std;

void agregar();

int main()
{
    cout << "Imprimire los numeros impares en orden descendente entre 1 y 100..." << endl;
    agregar();
}

void agregar()
{
    for (int i = 100; i >= 1 ; i--)
    {
        if (i % 2 != 0)
        {
            cout << i << ", ";
        }
    }
}