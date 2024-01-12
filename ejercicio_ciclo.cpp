#include <iostream>

using namespace std;

int main() {
    int lista [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i += 1) {
        if (lista[i] % 2 == 0) {
            cout << lista[i] << endl;
        }
    }
}