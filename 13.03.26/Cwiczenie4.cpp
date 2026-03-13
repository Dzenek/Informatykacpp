#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;

string Cezar(string napis, int klucz)
{
    int i;
    char ch;

    for(i=0;i<napis.size();i++)
    {
        ch=napis[i];

        if(isupper(ch))
            napis[i]=(ch-'A'-klucz+26)%26+'A';

        else if(islower(ch))
            napis[i]=(ch-'a'-klucz+26)%26+'a';
    }

    return napis;
}

void Szyfruj(int klucz)
{
    string s;
    ifstream wejscie("t_zaszyfrowany.txt");
    ofstream wyjscie("t_odszyfrowany.txt");

    while(getline(wejscie,s))
    {
        wyjscie<<Cezar(s,klucz)<<endl;
    }

    wejscie.close();
    wyjscie.close();
}

int main()
{
    int klucz;

    cout<<"Podaj klucz: ";
    cin>>klucz;

    Szyfruj(klucz);

    cout<<"Plik t_odszyfrowany.txt zostal utworzony"<<endl;

    return 0;
}