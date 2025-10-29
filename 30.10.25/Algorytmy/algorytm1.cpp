#include <iostream>
using namespace std;
int main() {

    int n, d=2;
    bool pierwsza;
    cout<<"n = "; cin>>n;
    if(n>1) pierwsza = true;
    else pierwsza = false;
    while (pierwsza && d*d<=n)
        if (n%d==0) pierwsza = false;
        else d++;
    if (pierwsza) cout<<"Tak";
    else cout<<"Nie";
    return 0;
}