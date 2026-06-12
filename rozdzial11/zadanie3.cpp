#include <iostream>
#include <string>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(Samochod samochod) {
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << samochod.marka << endl;
    cout << "Model: " << samochod.model << endl;
    cout << "Rok produkcji: " << samochod.rok_produkcji << endl;
}

int main() {
    Samochod samochod;
    samochod.marka = "Toyota";
    samochod.model = "Corolla";
    samochod.rok_produkcji = 2018;
    WyswietlDane(samochod);
    return 0;
}
