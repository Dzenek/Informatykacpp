int main() {
	string a,b,c;
	cout<<"Liczba1: "; cin>>a;
	cout<<"Liczba2: "; cin>>b;
	while (a.size()<8) a='0'+a;
	while (b.size()<8) b='0'+b;
	b=PrzeciwnaU2(b);
	c=DodajU2(a,b);
	cout<<"Roznica = "<<c;
	return 0;
	
} 	//11110100
	//00001100
