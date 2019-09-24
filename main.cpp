#include <iostream>

using namespace std;

int pedirEntero()
{
    int input;

    cout << "Ingrese un número entero positivo.\n";
    cin >> input;

    return input;
}

bool esCorrecto(int entero)
{
    if (entero > 0)
    {
        return true;
    }else
    {
        return false;
    }
}

int calcularFactorial(int entero)
{
    int factorial = entero;
    --entero;

    while (entero > 0)
    {
        factorial *= entero;
    }

    return factorial;
}

int main()
{
    int entero = pedirEntero();
    int factorial =1;

    if (esCorrecto(entero))
    {
        factorial = calcularFactorial(entero);
    }
    else {
        cout << "Solamente se permiten números enteros positivos.\n";
    }

    cout << "El factorial de " << entero << " es " << factorial << "\n";

    return 0;
}
