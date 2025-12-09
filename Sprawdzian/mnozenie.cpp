#include <iostream>
#include <string>
using namespace std;
string MnozPrzezCfr(int cfr, string liczba, int podst)
{
	int i, przn=0, iloczyn;
	string wynik="";
	for (i=liczba.size()-1;i>=0;i--) {
		iloczyn=cfr*(liczba[i]-'0')+przn;
		przn=iloczyn/podst;
		wynik=char(iloczyn%podst+'0')+wynik;
	}
	if (przn>0) wynik=char(przn+'0')+wynik;
	return wynik;
}
string Dodaj(string a, string b, int podst)
{
    
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;

    int przen = 0;
    string wynik = "";

    for (int i = a.size() - 1; i >= 0; i--)
    {
        int s = (a[i] - '0') + (b[i] - '0') + przen;
        przen = s / podst;
        wynik = char((s % podst) + '0') + wynik;
    }

    if (przen > 0) wynik = char(przen + '0') + wynik;

    return wynik;
}



int main() 
{
	int i, j, d, podstawa;
	string a, b, c="0", pom;
	cout<<"Podstawa systemu "; cin>>podstawa;
	cout<<"Liczba 1: "; cin>>a;
	cout<<"Liczba 2: "; cin>>b;
	d=b.size()-1;
	for (i=d;i>=0;i--)
	{
		pom=MnozPrzezCfr(b[i]-'0',a,podstawa);
		for (j=1;j<=d-i;j++) pom=pom+'0';
		c=Dodaj(c,pom,podstawa);
	}
	cout<<"Iloczyn = "<<c;
	return 0;
	
}