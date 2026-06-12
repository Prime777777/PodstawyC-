#include <iostream>
using namespace std;

double CalculateVolume(double a) {
    return a * a * a;
}

double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

double CalculateVolume(double r, double h) {
    return 3.1415 * r * r * h;
}

void DisplayResult(double objetosc) {
    cout << "Objetosc wynosi: " << objetosc << endl;
}

int main() {
    int wybor;
    double a, b, h, r;
    cout << "Wybierz bryle do obliczenia objetosci:" << endl;
    cout << "1 - Szescian (V = a^3)" << endl;
    cout << "2 - Prostopadloscian (V = a * b * h)" << endl;
    cout << "3 - Walec (V = pi * r^2 * h)" << endl;
    cout << "Wybierz numer bryly: ";
    cin >> wybor;
    if (wybor == 1) {
        cout << "Podaj dlugosc boku: ";
        cin >> a;
        DisplayResult(CalculateVolume(a));
    } else if (wybor == 2) {
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;
        DisplayResult(CalculateVolume(a, b, h));
    } else if (wybor == 3) {
        cout << "Podaj promien: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;
        DisplayResult(CalculateVolume(r, h));
    }
    return 0;
}
