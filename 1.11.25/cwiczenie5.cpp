#include <iostream>
using namespace std;
bool Pierwsza(int n) {

    int  d=5;
    bool p=(n>1);
    if (n>2 && n%2==0) p = false;
    if (n>3 && n%3==0) p = false;
    while (p && d*d<=n)
    	if (n%d==0) p=false;
    	else if (n%(d+2)==0) p=false;
    		else d=d+6;
    return p;
        
}
int main() 
{
	int licznik=1, x=5, n;
	cout<<"Podaj liczbe par: "; cin>>n;
	cout<<3<<" "<<5<<endl;
	while (licznik<n)
	{
		if (Pierwsza(x) && Pierwsza(x + 2))
		{
			cout<<x<<" "<<x+2<<endl;
			licznik++;
		}
		x=x+6;
	}
	return 0;
}