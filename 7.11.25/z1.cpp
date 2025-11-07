#include <iostream>

#include <string>

using namespace std;
 
int main()

{

	int i, prze=0, suma;

	string a, b, c;

	cout <<"1 liczba: "; cin>> a;

	cout <<"2liczba: "; cin>> b;

	while(a.size()<b.size()) a='0'+a;

	while(b.size()<a.size()) b='0'+b;

	for(i=a.size()-1;i>=0;i--)

	{

		suma=prze+a[i]-'0'+b[i]-'0';

		if(suma%2==1) c='1'+c;

		else c='0'+c;

	}

	if(prze==1) c='1'+c;

	cout<<"suma = "<<c;

	return 0;

}
 