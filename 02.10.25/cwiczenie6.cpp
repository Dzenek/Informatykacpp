#include <iostream>
#include <string>

using namespace std;

int main() {
    int cyfra, d = 0, p;
    string s;
    cout<<"Podaj podstawe systemu"; cin>>p;
    cout<<"Podaj liczbe w systemie o podstawie"; cin>>s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') cyfra = s[i] - '0';
        else cyfra = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - 'A' + 10 : s[i] - 'a' + 10;
        d = d * p + cyfra;
    }

    cout<<"liczba dziesietna: " <<d;
    return 0;

}