#include <iostream>
#include <string>

using namespace std;
int main() {

    int n, d=5;
    bool pierwsza;
    cout<<"n = "; cin>>n;
    pierwsza=(n>1);
    if (n>2 && n%2==0) pierwsza = false;
    if (n>3 && n%3==0) pierwsza = false;
    while (pierwsza && (d*d)<=n)
        if (n%d==0) pierwsza = false;
        else if (n%(d+2)==0) pierwsza = false;
            else d=d+6;
    if (pierwsza) cout<<"Tak";
    else cout<<"Nie";
    return 0;


}