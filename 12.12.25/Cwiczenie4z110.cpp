struct wymierna {
	int licz;
	int mian;
};

int nwd(int a, int b)
{
    int pom;
    while(b!=0)
    {
        pom = b;
        b=a % b;
        a = pom;
    }
}
wymierna skroc(wymierna a) {
	int n;
	n=nwd(a.licz,a.mian);
	a.licz=a.licz/n;
	a.mian=a.mian/n;
	return a;
}
  
int main() { 
	int n;
	wymierna a, x;
	cout<<"Podaj licznik";
	cin>>a.licz;
	cout<<"Podaj mianownik";
	cin>>a.mian;
	
	x=skroc(a);
	cout<<x.licz<<"/"<<x.mian;
	return 0;
	
}