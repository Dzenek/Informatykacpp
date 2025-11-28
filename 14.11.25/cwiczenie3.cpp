#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

string dodaj(string a, string b, int podstawa)

{

    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    int przen = 0;
    string wynik = "";
    for(int i = a.size() - 1; i >= 0; i--)

    {

        char A = a[i];
        char B = b[i];
        int cyfra1;
        int cyfra2;
        if(A >= '0' && A <= '9') cyfra1 = A - '0';
        else cyfra1 = A - 'A' + 10;
        if(B >= '0' && B <= '9') cyfra2 = B - '0';
        else cyfra2 = B - 'A' + 10;
        int suma = cyfra1 + cyfra2 + przen;
        przen = suma / podstawa;
      	suma = suma % podstawa;
        char znak;
        if(suma < 10) znak = suma + '0';
        else znak = (suma - 10) + 'A';
        wynik += znak;  

    }

    if(przen > 0)

    {

        char znak;
        if(przen < 10) znak = przen + '0';
        else znak = (przen - 10) + 'A';
        wynik += znak;

    }

    reverse(wynik.begin(), wynik.end());
    return wynik;

}

int main()

{

    string a, b;
    int podstawa;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Podaj podstawe (2-36): ";
    cin >> podstawa;
    cout << "Wynik: " << dodaj(a, b, podstawa) << endl;

}
 