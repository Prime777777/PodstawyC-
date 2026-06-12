#include <iostream>
using namespace std;

int main() {
    float celsjusz;
    char jednostka;
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsjusz;
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;
    switch (jednostka) {
        case 'K':
            cout << "Temperatura w stopniach Kelvina: " << celsjusz + 273.15 << endl;
            break;
        case 'F':
            cout << "Temperatura w stopniach Fahrenheita: " << (celsjusz * 9 / 5) + 32 << endl;
            break;
        default:
            cout << "Nieprawidlowa jednostka." << endl;
    }
    return 0;
}
