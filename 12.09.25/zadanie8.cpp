#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min = 9;
    while (n > 0) {
        int cyfra = n % 10;
        if (cyfra < min) {
            min = cyfra;
        }
        n = n / 10;
    }

    cout << "Najmniejsza cyfra to: " << min;
    return 0;
}
