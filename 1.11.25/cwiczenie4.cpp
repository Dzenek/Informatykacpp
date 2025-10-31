#include <iostream>
using namespace std;
 
int main()
{
	int n,d=3;
	cout<<"n = "; cin>>n;
	cout<<n<<" = ";
	while(n%2==0){
		cout<<2<<"*";
		n = n / 2;
	}
	while(d*d<=n)
		if(n%d==0){
			cout<<d<<"*";
			n=n/d;
		}
		else d = d + 2;
		
	cout<<n;
	return 0;
}