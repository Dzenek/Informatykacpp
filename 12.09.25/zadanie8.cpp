#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "podaj liczbe: ";
    cin >> n;

    int min = 9; 
    while (n > 0) {
        int cyfra = n % 10; //n = 1234 n % 10 = 4
        if (cyfra < min) {
            min = cyfra;
        }
        n = n / 10; //1234 / 10 = 123 n % 10 = 3
    }

    cout << "Najmniejsza cyfra to: " << min;
    return 0;
}
