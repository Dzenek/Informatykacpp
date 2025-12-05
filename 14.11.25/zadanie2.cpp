#include <iostream>
using namespace std;

void pole(int a, int b) {
    cout << "Pole = " << a * b << endl;
}

int main() {
	int bok1;
	int bok2;
	cin>>bok1;
	cin>>bok2;
    pole(bok1, bok2);
    return 0;
}
