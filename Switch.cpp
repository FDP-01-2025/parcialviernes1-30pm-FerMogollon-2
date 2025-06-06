#include <iostream>

using namespace std;

int main()
{
    int Puntaje;

    cout << "Bienvenido Gamer!!" << endl;
    cout << "Ingrese el puntaje obetenido en su ultima partida de LoL!" << endl;

    cin >> Puntaje;

    switch (Puntaje)
    {
    case 1:
        cout << "Gg pa' tu casa! Hazlo mejor! >_<" << endl;
        break;
    case 2:
        cout << "Suerte para la proxima!!!" << endl;
        break;
    case 3:
        cout << "Vas por buen camino, sigue asi!" << endl;
        break;
    case 4:
        cout << "Proxima partida MVP claro que si!!!!" << endl;
        break;
    case 5:
        cout << "Increible bro! Tienes de hijos a todos!" << endl;
        break;
    default:
        cout << "Ingresa unicamente valores entre 1-5" << endl;
    }

    cout << endl;

    return 0;
}