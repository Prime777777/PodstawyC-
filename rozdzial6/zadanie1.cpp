#include <iostream>
using namespace std;

int main() {
    int tablica[5];
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
        suma = suma + tablica[i];
    }
    cout << "Srednia liczb: " << suma / 5 << endl;
    return 0;
}
