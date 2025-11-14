#include <iostream>
#include <string>
using namespace std;

string PrzeciwnaU2(string s)
{
    int i;
    for (i = 0; i < 8; i++)
        if (s[i] == '0') s[i] = '1';
        else s[i] = '0';
    s = '0' + s; i = 8; 
    while (s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    s[i] = '1';

    return s.substr(1, 8);
}

string DodajU2(string a, string b)
{
	string c = "";
	int suma, przn = 0, i, ost=0;
	for(i = 7; i>=0;i--) {
		suma = przn + a[i] - '0' + b[i] - '0';
		if(suma%2==1) c = '1' + c;
		else c = '0' + c;
		przn = suma / 2;
		if(i <=1) ost = ost + przn;
	}
	if (ost==1) {
		cout<<"Wynik przekracza zakres" <<endl;
	}
	return c;
	
}

int main() {
	string a, b, c;
	cout<<"Liczba1: "; cin>>a;
	cout<<"Liczba2: "; cin>>b;
	while (a.size()<8) a='0'+a;
	while (b.size()<8) b='0'+br;
	b=PrzeciwnaU2(b);
	c=DodajU2(a,b);
	cout<<"Roznica = "<<c;
	return 0; 
}