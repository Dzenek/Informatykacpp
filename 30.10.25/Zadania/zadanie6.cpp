#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe calkowita dodatnia: ";
    cin >> n;

    int liczba = n + 1; 

    while (true) {
        bool pierwsza = true;


        for (int i = 2; i < liczba; i++) {
            if (liczba % i == 0) {
                pierwsza = false;
                break;
            }
        }


        if (pierwsza) {
            cout << "Najmniejsza liczba pierwsza wieksza od " << n << " to: " << liczba << endl;
            break;
        }

        liczba++; 
    }

    return 0;
}
