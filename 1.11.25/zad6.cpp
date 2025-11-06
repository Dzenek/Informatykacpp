#include <iostream>
using namespace std;

bool pierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int x = n + 1;
    while (!pierwsza(x)) {
        x++;
    }

    cout << x << endl;
    return 0;
}
