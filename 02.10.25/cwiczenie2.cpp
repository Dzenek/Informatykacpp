#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, d=0, potega = 1;
    string b;
    cout<<"podaj liczbe binarna: "; cin>>b;
    for (i=b.size()-1; i>=0;i--)
    {
        if (b[i]=='1') d=d+potega;
        potega = potega*2;
    }

    cout<<"liczba dziesietna to: "<<d;
    return 0;
}