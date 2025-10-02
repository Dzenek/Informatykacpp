#include <iostream>
using namespace std;

int main() {
    int n;
    int max;
    cout << "podaj liczbe: ";
    cin >> n;
    max = n;

    for (int i = 0; i < 5; i++) { //i++ = i + 1
        cin >> n;
        if (n > max) {
            max = n;
        }
    }

    cout << "Najwieksza liczba to: " << max;
    return 0;
}
