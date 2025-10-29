#include <iostream>
using namespace std;
int main() {

    int n, d=2;
    bool pierwsza;
    cout<<"n = "; cin>>n;
    if(n>2 && n%2==0) pierwsza = false;
    else pierwsza = true;
    while (pierwsza && d*d<=n)
        if (n%d==0) pierwsza = false;
        else d = d + 2;
    if (pierwsza) cout<<"Tak";
    else cout<<"Nie";
    return 0;
}