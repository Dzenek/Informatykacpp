#include <iostream>
using namespace std;

int main() {
    int poprzednia, obecna;
    int rosnacy = 1;

    cin >> poprzednia;
    for (int i = 1; i < 5; i++) {
        cin >> obecna;
        if (obecna <= poprzednia) {
            rosnacy = 0;
        }
        poprzednia = obecna;
    }

    if (rosnacy == 1) {
        cout << "tak";
    } else {
        cout << "nie";
    }

    return 0;
}
