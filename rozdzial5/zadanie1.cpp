#include <iostream>
using namespace std;

int main() {
    int N;
    int suma = 0;
    cout << "Podaj liczbe N: ";
    cin >> N;
    cout << endl;
    for (int i = 1; i <= N; i++) {
        suma = suma + i;
    }
    cout << "Suma liczb od 1 do " << N << " wynoisi: " << suma << endl;
    return 0;
}
