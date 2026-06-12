#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    return liczba;
}

int CalculateFactorial(int n) {
    int wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik = wynik * i;
    }
    return wynik;
}

void DisplayResult(int n, int silnia) {
    cout << "Silnia liczby " << n << " wynosi: " << silnia << endl;
}

int main() {
    int liczba = GetNumberFromUser();
    int silnia = CalculateFactorial(liczba);
    DisplayResult(liczba, silnia);
    return 0;
}
