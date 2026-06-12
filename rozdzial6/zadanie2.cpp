#include <iostream>
using namespace std;

int main() {
    int tablica[5];
    cout << "Wprowadz 5 liczb calkowitych:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> tablica[i];
    }
    for (int i = 0; i < 5; i++) {
        if (tablica[i] < 0) {
            tablica[i] = 0;
        }
    }
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << tablica[i];
        if (i < 4) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}
