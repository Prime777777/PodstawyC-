#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int* tablica, int rozmiar, int poczatek, int koniec) {
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = poczatek + rand() % (koniec - poczatek + 1);
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
    int poczatek, koniec, ile;
    cout << "Ile liczb wylosowac: ";
    cin >> ile;
    cout << "Wartosc poczatkowa: ";
    cin >> poczatek;
    cout << "Wartosc koncowa: ";
    cin >> koniec;
    int tablica[100];
    LosujTablice(tablica, ile, poczatek, koniec);
    cout << "Tablica: ";
    for (int i = 0; i < ile; i++) {
        cout << tablica[i] << ", ";
    }
    cout << endl;
    cout << endl;
    int liczba;
    int proby = 0;
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;
        if (SprawdzLiczbe(&liczba, tablica, ile)) {
            cout << "Zgadles!" << endl;
        } else {
            cout << "Nie zgadles" << endl;
        }
    } while (!SprawdzLiczbe(&liczba, tablica, ile));
    cout << "Zgadles za " << proby << " razem." << endl;
    return 0;
}
