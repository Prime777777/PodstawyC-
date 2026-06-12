#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    int suma = 0;
    cout << "Podaj liczbe N: ";
    cin >> N;
    cout << endl;
    while (i <= N) {
        suma = suma + i;
        i++;
    }
    cout << "Suma liczb naturalnych do " << N << ": " << suma << endl;
    return 0;
}
