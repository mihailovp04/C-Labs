#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int n = s.length();
    int firstcomma = -1;
    int lastcomma = -1;

    for (int i = 0; i < n; ++i) {
        if (s[i] == ',') {
            if (firstcomma == -1) {
                firstcomma = i + 1;
            }
            lastcomma = i + 1;
        }
    }

    if (firstcomma != -1) {
        cout << "a) first comma is founded : " << firstcomma << endl;
    }
    else {
        cout << "a) Comma is not founded." << endl;
    }

    if (lastcomma != -1) {
        cout << "b) Last comma is founded: " << lastcomma << endl;
    }
    else {
        cout << "b) Comma is not founded." << endl;
    }

    return 0;
}

