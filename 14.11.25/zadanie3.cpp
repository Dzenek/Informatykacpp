#include <iostream>
using namespace std;

void pole() {
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Pole = " << a * b << endl;
}

int main() {
    pole();
    return 0;
}
