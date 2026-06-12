#include <iostream>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    Osoba osoby[3];
    osoby[0].imie = "Jan";
    osoby[0].nazwisko = "Kowalski";
    osoby[0].wiek = 25;
    osoby[1].imie = "Anna";
    osoby[1].nazwisko = "Nowak";
    osoby[1].wiek = 30;
    osoby[2].imie = "Piotr";
    osoby[2].nazwisko = "Wisniewski";
    osoby[2].wiek = 40;
    cout << "Dane zapisane w tablicy struktur:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". Imie: " << osoby[i].imie << ", Nazwisko: " << osoby[i].nazwisko << ", Wiek: " << osoby[i].wiek << endl;
    }
    return 0;
}
