#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char tekst[21];
    char odwrocony[21];
    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 21);
    int dlugosc = strlen(tekst);
    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = tekst[dlugosc - 1 - i];
    }
    odwrocony[dlugosc] = '\0';
    cout << "Odwrocony ciag: " << odwrocony << endl;
    return 0;
}
