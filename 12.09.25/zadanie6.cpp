#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;//% jest reszta z dzielenia przez 

    int ostatnia = n % 10; //1234 % 10 = 4
    int pierwsza = n;
    while (pierwsza >= 10) { //while - petra while(warunek) { pierwsza = pierwsza / 10}
        pierwsza = pierwsza / 10;

        //1234 % 10 = 4 1234 / 10 = 123 123 % 10 = 3
        //1111
    }

    if (pierwsza == ostatnia) { //if (cos bedzie czyms albo cos sie stanie) 
        cout << "tak";
    } else {
        cout << "nie";
    }

    return 0;
}
