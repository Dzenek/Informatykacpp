#include <iostream>
#include <string>

using namespace std;

int main() {

    int p;
    cout << "Podstawa systemu (2–36): ";
    cin >> p;

    if (p < 2 || p > 36) {
        cout << "Nieprawidlowa podstawa!";
        return 0;
    }

    string a, b, c = "";
    int prze = 0;

    cout << "1 liczba: ";
    cin >> a;

    cout << "2 liczba: ";
    cin >> b;


    for (char &x : a)
        if (x >= 'a' && x <= 'z')
            x = x - 'a' + 'A';

    for (char &x : b)
        if (x >= 'a' && x <= 'z')
            x = x - 'a' + 'A';


    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;

    for (int i = a.size() - 1; i >= 0; i--) {

        int da, db;

   
        if (a[i] >= '0' && a[i] <= '9')
            da = a[i] - '0';
        else
            da = a[i] - 'A' + 10;

  
        if (b[i] >= '0' && b[i] <= '9')
            db = b[i] - '0';
        else
            db = b[i] - 'A' + 10;

        int suma = da + db + prze;

        int cyfra = suma % p;
        prze = suma / p;

        char znak;
        if (cyfra < 10)
            znak = '0' + cyfra;
        else
            znak = 'A' + (cyfra - 10);

        c = znak + c;
    }

    if (prze > 0) {
        char znak;
        if (prze < 10)
            znak = '0' + prze;
        else
            znak = 'A' + (prze - 10);

        c = znak + c;
    }

    cout << "Suma = " << c;

    return 0;
}
