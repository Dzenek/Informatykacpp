#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, prze = 0, suma, pod, cyfra1, cyfra2;
    string a, b, c;

    cout << "1 liczba: "; cin >> a;
    cout << "2 liczba: "; cin >> b;
    cout << "podaj podstawe: "; cin >> pod;

    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;

    for (i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] <= '9') cyfra1 = a[i] - '0';
        else cyfra1 = a[i] - 'A' + 10;

        if (b[i] <= '9') cyfra2 = b[i] - '0';
        else cyfra2 = b[i] - 'A' + 10;

        suma = prze + cyfra1 + cyfra2;
        prze = suma / pod;
        suma = suma % pod;

        if (suma < 10) c = char(suma + '0') + c;
        else c = char(suma - 10 + 'A') + c;
    }

    if (prze > 0)
    {
        if (prze < 10) c = char(prze + '0') + c;
        else c = char(prze - 10 + 'A') + c;
    }

    cout << "suma = " << c << endl;
    return 0;
}