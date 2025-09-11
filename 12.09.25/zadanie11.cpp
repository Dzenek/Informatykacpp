#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int liczba_parzysta = 1;

    while (n > 0) {
        int cyfra = n % 10;
        if (cyfra % 2 != 0) {
            liczba_parzysta = 0;
        }
        n = n / 10;
    }

    if (liczba_parzysta == 1) {
        cout << "tak";
    } else {
        cout << "nie";
    }

    return 0;
}
