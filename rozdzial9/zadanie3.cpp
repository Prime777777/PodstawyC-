#include <iostream>
using namespace std;

int CalculatePowerRecursive(int podstawa, int wykladnik) {
    if (wykladnik == 0) {
        return 1;
    } else {
        return podstawa * CalculatePowerRecursive(podstawa, wykladnik - 1);
    }
}

void DisplayResult(int podstawa, int wykladnik, int wynik) {
    cout << podstawa << " do potegi " << wykladnik << " wynosi: " << wynik << endl;
}

int main() {
    int podstawa, wykladnik;
    cout << "Podaj liczbe podstawowa: ";
    cin >> podstawa;
    cout << "Podaj wykladnik: ";
    cin >> wykladnik;
    int wynik = CalculatePowerRecursive(podstawa, wykladnik);
    DisplayResult(podstawa, wykladnik, wynik);
    return 0;
}
