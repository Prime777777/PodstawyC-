#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = rand() % 51;
    }
}

bool SprawdzLiczbe(int* liczba, int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (*liczba == tablica[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    srand(time(NULL));
    int tablica[10];
    int liczba;
    int proby = 0;
    LosujTablice(tablica, 10);
    cout << "Tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << tablica[i] << ", ";
    }
    cout << endl;
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;
        if (SprawdzLiczbe(&liczba, tablica, 10)) {
            cout << "Zgadles!" << endl;
        } else {
            cout << "Nie zgadles" << endl;
        }
    } while (!SprawdzLiczbe(&liczba, tablica, 10));
    cout << "Zgadles za " << proby << " razem." << endl;
    return 0;
}
