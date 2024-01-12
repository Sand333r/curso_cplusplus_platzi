#include <iostream>

using namespace std;

int main() {
    int option = 0;
    cout << "Introducir una opcion: ";
    cin >> option;
    switch (option) {
        case 1:
            cout << "Seleccionaste la opcion 1.";
            break;
        case 2:
            cout << "Seleccionaste la opcion 2.";
            break;
        default:
            cout << "No seleccionaste nada burro";
    }
}