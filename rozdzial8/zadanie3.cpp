#include <iostream>
#include <string>
using namespace std;

string GetTextFromUser() {
    string text;
    cout << "Podaj ciag znakow: ";
    getline(cin, text);
    return text;
}

string ReverseString(string text) {
    string odwrocony = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        odwrocony = odwrocony + text[i];
    }
    return odwrocony;
}

void DisplayResult(string text) {
    cout << "Odwrocony ciag: " << text << endl;
}

int main() {
    string tekst = GetTextFromUser();
    string wynik = ReverseString(tekst);
    DisplayResult(wynik);
    return 0;
}
