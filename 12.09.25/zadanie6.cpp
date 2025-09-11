#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ostatnia = n % 10;
    int pierwsza = n;
    while (pierwsza >= 10) {
        pierwsza = pierwsza / 10;
    }

    if (pierwsza == ostatnia) {
        cout << "tak";
    } else {
        cout << "nie";
    }

    return 0;
}
