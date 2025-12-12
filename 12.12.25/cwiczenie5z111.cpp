#include <iostream>
using namespace std;

struct wymierna {
    int licz;
    int mian;
};

int nwd(int a, int b)
{
    while(b != 0)
    {
        int pom = b;
        b = a % b;
        a = pom;
    }
    return a;
}
wymierna skroc(wymierna a) {
    int n = nwd(a.licz, a.mian);
    a.licz /= n;
    a.mian /= n;
    return a;
}
int nww(int a, int b) {
    return a / nwd(a, b) * b;   
}

int main() { 
    wymierna a, x;
    cout << "Podaj licznik: ";
    cin >> a.licz;
    cout << "Podaj mianownik: ";
    cin >> a.mian;
    x = skroc(a);
    cout << "Skrocona liczba: " << x.licz << "/" << x.mian << endl;
    cout << "NWW licznika i mianownika: " << nww(a.licz, a.mian) << endl;

    return 0;
}
