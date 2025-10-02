#include <iostream>
using namespace std;

int main() {
    int poprzednia;
    int obecna;
    int rosnacy = 1; //1 = jest rosnacy 0 = nie jest rosnacy

    cin >> poprzednia; 
    for (int i = 1; i < 5; i++) {
        cin >> obecna;
        if (obecna <= poprzednia) {   //12 13 14 15 16
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
