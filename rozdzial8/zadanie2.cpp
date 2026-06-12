#include <iostream>
using namespace std;

float suma(float a, float b) {
    return a + b;
}

float roznica(float a, float b) {
    return a - b;
}

float iloczyn(float a, float b) {
    return a * b;
}

float iloraz(float a, float b) {
    return a / b;
}

int main() {
    int wybor;
    float a, b;
    float wynik;
    do {
        cout << "Wybierz funkcje:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Roznica" << endl;
        cout << "3. Iloczyn" << endl;
        cout << "4. Iloraz" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybrana funkcja: ";
        cin >> wybor;
        if (wybor == 0) {
            cout << "Koniec programu." << endl;
        } else if (wybor >= 1 && wybor <= 4) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;
            if (wybor == 1) {
                wynik = suma(a, b);
            } else if (wybor == 2) {
                wynik = roznica(a, b);
            } else if (wybor == 3) {
                wynik = iloczyn(a, b);
            } else {
                wynik = iloraz(a, b);
            }
            cout << "Wynik: " << wynik << endl;
            cout << endl;
        }
    } while (wybor != 0);
    return 0;
}
