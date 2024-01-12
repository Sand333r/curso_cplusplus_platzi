#include <iostream>

using namespace std;

int main() {
    char respuesta = 'n';  // Inicializa respuesta con un valor por defecto
    while (respuesta != 'y' && respuesta != 'Y') {
        cout << "¿Deseas terminar? (y/n): ";
        cin >> respuesta;
    }

    cout << "Adios" << endl;

    return 0;  // Indica que el programa terminó correctamente
}
