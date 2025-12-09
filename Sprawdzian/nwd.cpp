#include <iostream>
#include <string>

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