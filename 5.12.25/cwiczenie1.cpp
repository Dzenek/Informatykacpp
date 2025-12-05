#include <iostream>

using namespace std;
 
int nwd1(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int nwd2(int a, int b)

{
    while (a != 0 && b != 0)
    {
        if (a > b) 
            a = a % b;
        else 
            b = b % a;
    }
 
    if (a != 0) 
        return a;
    else 
    
      return b;
}
int nwd3(int a, int b)
{
	int pom;
	while(b!=0)
	{
		pom = b;
		b=a % b;
		a = pom;
	}
	return a;
}
 

 
 
int main()

{
    int a, b, c, d, d;
    cout << "liczba a: "; cin >> a;
    cout << "liczba b: "; cin >> b;
    c = nwd1(a, b);
    d = nwd2(a, b);
    e = nwd3(a, b);
    cout << "NWD1 to: " << c << endl;
    cout << "NWD2 to: " << d << endl;
    cout << "NWD3 to: " << e << endl;


}

 