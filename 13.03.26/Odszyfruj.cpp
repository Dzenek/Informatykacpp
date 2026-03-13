#include <iostream>
#include <string>
using namespace std;
 
string odszyfruj(string tekst, int klucz)
{
	int dl, kod;
	string jawny="";
	dl=tekst.size();
	for(int i=0; i<dl; i++)
	{
		kod=tekst[i]-klucz;
		if(kod<'A') kod+=26;
		jawny+=char(kod);
	}
	return jawny;
}
 
int main()
{
	string tekst;
	cout<<"szyfr: "; cin>>tekst;

	for(int i=0; i<26; i++)
	{
		cout<<"klucz="<<i<<"tekst jawny: "<<odszyfruj(tekst, i)<<endl;
	}
 
	
 
	return 0;
}