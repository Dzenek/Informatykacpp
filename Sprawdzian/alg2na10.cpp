#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, d=0;
    string b;
    cout<<"podaj liczbe binarna: "; cin>>b;
    for (i=0;i<b.size();i++)
    {
        d = d*2;
        if (b[i]=='1') d++;
        
    }

    cout<<"liczba dziesietna to: "<<d;
    return 0;
}