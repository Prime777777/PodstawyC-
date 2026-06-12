#include <iostream>
using namespace std;

int main() {
    int liczba = 10;
    float liczbaFloat = 3.14;
    char znak = 'A';
    bool logiczna = true;
    cout << "Zmienna całkowita: " << liczba << endl;
    cout << "Zmienna zmiennoprzecinkowa: " << liczbaFloat << endl;
    cout << "Zmienna znakowa: " << znak << endl;
    cout << boolalpha;
    cout << "Zmienna logiczna: " << logiczna << endl;
    return 0;
}
