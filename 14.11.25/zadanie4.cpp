#include <iostream>
using namespace std;

int pole() {
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    return a * b;
}

int main() {
    int wynik = pole();
    cout << "Pole = " << wynik << endl;
    return 0;
}
