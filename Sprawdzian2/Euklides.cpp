//Algorytnm euklidesa dzielenie 
int NWD(int a, int b) {
    int pom;
    while (b!=0) {
        pom=b;
        b=a%b
        a=pom;
    }
    return a;

}




if a!=0 cout<<a;
else cout<<<b;
//Algorytm euklidesa  odejmowanie 
while (a!=b) {
    if (a>b) a=a-b;
    else b=b-a;
}
cout<<a;