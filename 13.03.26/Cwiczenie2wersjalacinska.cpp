#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;
 
int main()
{
	int i;
	string napis;
	char ch;
	int Licznik[26];
	for(i=0; i<26; i++) Licznik[i]=0;
	ifstream wejscie("dane_zliczanielacinskie.txt");
	while(getline(wejscie, napis))
	{
    	for (i=0; i<napis.size(); i++)
    	{
        	ch=toupper(napis[i]);
        	if (ch>='A' && ch<='Z') Licznik[ch-'A']++;
    	}
	}
	wejscie.close();
	for (i=0; i<26; i++)
		if(Licznik[i]>0)
		{
			cout<<char(i+'A')<<" - ";
			cout<<Licznik[i]<<endl;
		}
	return 0;
}