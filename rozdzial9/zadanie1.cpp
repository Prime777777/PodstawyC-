#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}

int CalculateSumRecursive(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + CalculateSumRecursive(n - 1);
    }
}

void DisplayResult(int n, int suma) {
    cout << "Suma liczb od 1 do " << n << " wynosi: " << suma << endl;
}

int main() {
    int n = GetNumberFromUser();
    int suma = CalculateSumRecursive(n);
    DisplayResult(n, suma);
    return 0;
}
