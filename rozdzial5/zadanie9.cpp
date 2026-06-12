#include <iostream>
using namespace std;

int main() {
    int licznik = 0;
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if (a != b && a != c && b != c) {
            cout << i << endl;
            licznik++;
        }
    }
    cout << "Liczb bez powtarzajacych sie cyfr: " << licznik << endl;
    return 0;
}
