#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool Palindrom(string wyraz)

{
	int i=0, j=wyraz.size()-1;
	bool p=true;
	while (i<j)
	{
		if(toupper(wyraz[i])==toupper(wyraz[j]))
		{
				i++, j--;
		}
			else return false;
	}
	return true;
}

int main()
{
	int i;
	string wyraz, zdanie;
	cout<<"Podaj zdanie: ";
	getline(cin,zdanie);
	zdanie=zdanie+' ';
	while (zdanie.size()>0)
	{
		i=zdanie.find(' ');
		if (i>0)
		{
			wyraz = zdanie.substr(0,i);
			if(Palindrom(wyraz)) cout<<wyraz<<endl;
		}
		zdanie.erase(0,i+1);
	}
	return 0;
}
	
	

