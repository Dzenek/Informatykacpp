#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int poprzednia = n % 10;
    n = n / 10;
    int malejacy = 1;

    while (n > 0) {
        int cyfra = n % 10;
        if (cyfra <= poprzednia) {
            malejacy = 0;
        }
        poprzednia = cyfra;
        n = n / 10;
    }

    if (malejacy == 1) {
        cout << "tak";
    } else {
        cout << "nie";
    }

    return 0;
}
