#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    ifstream sprawdz("dane.txt");
    if (!sprawdz.good()) {
        cout << "Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykladowych danych..." << endl;
        ofstream nowy("dane.txt");
        nowy << "Jan Kowalski 25" << endl;
        nowy << "Anna Nowak 30" << endl;
        nowy.close();
    }
    sprawdz.close();
    char odpowiedz;
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> odpowiedz;
    if (odpowiedz == 't') {
        Osoba osoba;
        cout << "Podaj imie: ";
        cin >> osoba.imie;
        cout << "Podaj nazwisko: ";
        cin >> osoba.nazwisko;
        cout << "Podaj wiek: ";
        cin >> osoba.wiek;
        ofstream dopisz("dane.txt", ios::app);
        dopisz << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << endl;
        dopisz.close();
    }
    cout << endl;
    cout << "Dane w pliku po dopisaniu:" << endl;
    string imie, nazwisko;
    int wiek;
    ifstream odczyt("dane.txt");
    while (odczyt >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << endl;
    }
    odczyt.close();
    return 0;
}
