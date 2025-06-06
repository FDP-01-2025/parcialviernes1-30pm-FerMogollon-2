#include <iostream>

using namespace std;

int main()
{
    float Sueldo;
    float Impuesto = 0;
    cout << "Bienvenido a su Calculadora de Impuesto." << endl;
    cout << "Ingrese su sueldo: ";
    cin >> Sueldo;

    if (Sueldo <= 0)
    {
        cout << "Ingrese un sueldo mayor a 0" << endl;
        return 1;
    }
    else if (Sueldo > 2000)
    {
        Impuesto = Sueldo * 0.15;

        cout << "Usted debe de pagar el equivalente a $" << Impuesto << " de impuesto." << endl;
    }
    else
    {
        Impuesto = Sueldo * 0.1;

        cout << "Usted debe de pagar el equivalente a $" << Impuesto << " de impuesto." << endl;
    }

    cout << endl;

    cout << "Gracias por visitarnos :)" << endl;

    return 0;
}