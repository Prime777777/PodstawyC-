#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int wybor;
    string nazwa, staraNazwa, nowaNazwa;
    do {
        cout << "Wybierz operacje:" << endl;
        cout << "1 - Utworz nowy plik" << endl;
        cout << "2 - Usun plik" << endl;
        cout << "3 - Zmien nazwe pliku" << endl;
        cout << "0 - Wyjscie" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;
        if (wybor == 1) {
            cout << endl;
            cout << "Podaj nazwe nowego pliku: ";
            cin >> nazwa;
            ofstream plik(nazwa);
            plik.close();
            cout << endl;
            cout << "Plik '" << nazwa << "' zostal utworzony." << endl;
        } else if (wybor == 2) {
            cout << endl;
            cout << "Podaj nazwe pliku do usuniecia: ";
            cin >> nazwa;
            if (remove(nazwa.c_str()) == 0) {
                cout << endl;
                cout << "Plik '" << nazwa << "' zostal usuniety." << endl;
            } else {
                cout << endl;
                cout << "Nie udalo sie usunac pliku." << endl;
            }
        } else if (wybor == 3) {
            cout << endl;
            cout << "Podaj nazwe pliku do zmiany: ";
            cin >> staraNazwa;
            cout << "Podaj nowa nazwe pliku: ";
            cin >> nowaNazwa;
            if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0) {
                cout << endl;
                cout << "Plik zostal pomyslnie zmieniony na '" << nowaNazwa << "'." << endl;
            } else {
                cout << endl;
                cout << "Nie udalo sie zmienic nazwy pliku." << endl;
            }
        }
        cout << endl;
    } while (wybor != 0);
    return 0;
}
