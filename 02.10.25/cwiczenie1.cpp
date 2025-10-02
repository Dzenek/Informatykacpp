#include <iostream>
#include <string>

using namespace std;

int main() {
    int d;
    string b ="";
    cout<<"podaj liczbe dziesietna: "; cin>>d;
    while(d > 0) {
        if (d%2==0) b='0'+b;
        else b='1'+b;
        d=d/2;
    }

    cout<<"liczba binarna to: "<<b;
    return 0;
}