#include <iostream>
#include <string>
using namespace std;

string Dodaj(string a, string b)
{
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;

    string c = "";
    int przn = 0;

    for (int i = a.size() - 1; i >= 0; i--)
    {
        int suma = przn + (a[i] - '0') + (b[i] - '0');
        c = char('0' + (suma % 2)) + c;
        przn = suma / 2;
    }

    if (przn) c = '1' + c;

    return c;
}

int main()
{
    string a, b, c = "0";
    int i;

    cout << "Liczna1: "; cin >> a;
    cout << "Liczna2: "; cin >> b;

    for (i = b.size() - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            c = Dodaj(c, a);

        a = a + '0';  // przesunięcie w lewo -> *2
    }

    cout << "Iloczyn to " << c;
    return 0;
}