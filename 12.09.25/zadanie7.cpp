#include <iostream>
using namespace std;

int main() {
    int n, max;
    cin >> n;
    max = n;

    for (int i = 1; i < 5; i++) {
        cin >> n;
        if (n > max) {
            max = n;
        }
    }

    cout << "Najwieksza liczba to: " << max;
    return 0;
}
