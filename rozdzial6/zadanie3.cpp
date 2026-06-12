#include <iostream>
using namespace std;

int main() {
    int tablica[10];
    int min;
    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }
    min = tablica[0];
    for (int i = 1; i < 10; i++) {
        if (tablica[i] < min) {
            min = tablica[i];
        }
    }
    cout << "Najmniejsza liczba to: " << min << endl;
    return 0;
}
