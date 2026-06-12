#include <iostream>
using namespace std;

int main() {
    int punkty;
    cout << "Podaj wynik egzaminu (liczba punktow): ";
    cin >> punkty;
    if (punkty < 0 || punkty > 100) {
        cout << "Niepoprawna liczba punktow. Punkty musza byc w zakresie od 0 do 100." << endl;
    } else if (punkty == 100) {
        cout << "Ocena: Celujaca" << endl;
    } else if (punkty >= 85) {
        cout << "Ocena: Bardzo dobra" << endl;
    } else if (punkty >= 70) {
        cout << "Ocena: Dobra" << endl;
    } else if (punkty >= 50) {
        cout << "Ocena: Dostateczna" << endl;
    } else {
        cout << "Ocena: Niedostateczna" << endl;
    }
    return 0;
}
