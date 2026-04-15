#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    int i;
    char ch;
    string napis;
    int Liczniki[26];
    int indeks_m = 0; //Maksimum
    for (i=0;i<26;i++) Liczniki[i] = 0;
    ifstream wejscie("dane_zliczanie.txt");
    while (!wejscie.eof()) {
        getline(wejscie,napis);
        for(i=0;i<napis.size();i++)
        {
            ch=toupper(napis[i]);
            if (ch>='A' && ch<='Z') Liczniki[ch-'A']++;

        }
    }
    //Maksimum
    for (i=1; i<26;i++) {
        if (Liczniki[i]>Liczniki[indeks_m]) {
            indeks_m=1;
        }
    }
    cout<<"najczestsza litera = "<<char(indeks_m+'A')<<endl;
    //-----
    wejscie.close();
    for (i=0;i<26;i++)
        if(Liczniki[i]>0) {
            cout<<char(i+'A')<<" - ";
            cout<<Liczniki[i]<<endl;
        }
    return 0;

}