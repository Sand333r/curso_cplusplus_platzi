#include <iostream>

using namespace std;

int main() {
    int edad = 0;
    cout << "Ingresar su edad: ";
    cin >> edad;
    if ((edad < 18) or (edad > 40)) {
        cout << "No podes votar";
    } 
    else {
        cout << "Podes votar";
    }
}