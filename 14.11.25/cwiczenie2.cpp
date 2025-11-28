#include <iostream>
#include <string>

using namespace std;

int main() {

    int p;      
    cout << "Podstawa systemu (2 10): ";
    cin >> p;

    if (p < 2 || p > 10) {
        cout << "Nieprawidlowa podstawa!";
        return 0;
    }

    string a, b, c = "";
    int prze = 0;   
    int suma;

    cout << "1 liczba: ";
    cin >> a;

    cout << "2 liczba: ";
    cin >> b;

   
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;


    for (int i = a.size() - 1; i >= 0; i--) {
        int da = a[i] - '0';
        int db = b[i] - '0';

        suma = prze + da + db;

        c = char('0' + (suma % p)) + c;
        prze = suma / p;
    }

    if (prze > 0)
        c = char('0' + prze) + c;

    cout << "Suma = " << c;

    return 0;
}
