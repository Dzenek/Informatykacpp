#include <iostream>
using namespace std;

int pole(int a, int b) {
    return a * b;
}

int main() {
	int bok1;
	int bok2;
    int wynik = pole(bok1, bok2);
    cout << "Pole = " << wynik << endl;
    return 0;
}
