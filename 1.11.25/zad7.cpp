#include <iostream>
using namespace std;

bool doskonala(int n) {
    int suma = 1; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            suma += i;
            if (i != n / i) suma += n / i;
        }
    }
    return n > 1 && suma == n;
}

int main() {
    int znalezione = 0;
    int liczba = 2;

    while (znalezione < 4) {
        if (doskonala(liczba)) {
            cout << liczba << endl;
            znalezione++;
        }
        liczba++;
    }

    return 0;
}
