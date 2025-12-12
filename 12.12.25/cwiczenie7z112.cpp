#include <iostream>
using namespace std;

struct wymierna {
    int licz;
    int mian;
};
int nwd(int a, int b)
{
    int pom;
    while(b != 0)
    {
        pom = b;
        b = a % b;
        a = pom;
    }
    return a;   
}
void PiszUlamek(wymierna a)
{
    if (a.licz < 0) cout << "(";
    cout << a.licz;
    if (a.mian > 1) cout << "/" << a.mian;
    if (a.licz < 0) cout << ")";
}
wymierna skroc(wymierna a) {
    int n = nwd(a.licz, a.mian);
    a.licz /= n;
    a.mian /= n;
    return a;
}
wymierna pomnoz(wymierna a, wymierna b) {
    wymierna c;

   
    int pom;
    pom = a.mian;
    a.mian = b.mian;
    b.mian = pom;
    a = skroc(a);   
    b = skroc(b);
    c.licz = a.licz * b.licz;
    c.mian = a.mian * b.mian;
    return c;
}
int main() {
    wymierna a, b, c;
    cout << "Licznik1 ="; cin >> a.licz;
    cout << "Mianowik1 ="; cin >> a.mian;
    a = skroc(a);
    cout << "Licznik2 ="; cin >> b.licz;
    cout << "Mianowik2 ="; cin >> b.mian;
    b = skroc(b);
    c = pomnoz(a, b);
    PiszUlamek(a);
    cout << " * ";
    PiszUlamek(b);
    cout << " = ";
    PiszUlamek(c);
    return 0;
}
