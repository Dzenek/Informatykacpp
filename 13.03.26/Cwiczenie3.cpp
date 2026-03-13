#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;

int main()
{
    int i,j;
    string napis;
    char ch;

    string alfabet[32] = {
        "A","Ą","B","C","Ć","D","E","Ę","F","G","H","I","J","K","L","Ł",
        "M","N","Ń","O","Ó","P","R","S","Ś","T","U","W","Y","Z","Ź","Ż"
    };

    int Licznik[32];
    for(i=0;i<32;i++) Licznik[i]=0;

    ifstream wejscie("dane_zliczanie.txt");

    while(getline(wejscie, napis))
    {
        for(i=0;i<napis.size();i++)
        {
            string litera="";
            litera+=toupper(napis[i]);

            for(j=0;j<32;j++)
            {
                if(litera==alfabet[j])
                    Licznik[j]++;
            }
        }
    }

    wejscie.close();

    ofstream wyjscie("wyniki.txt");

    for(i=0;i<32;i++)
        if(Licznik[i]>0)
        {
            wyjscie<<alfabet[i]<<" - ";
            wyjscie<<Licznik[i]<<endl;
        }

    wyjscie.close();

    return 0;
}