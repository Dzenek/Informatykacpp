int NWD(int a, int b) {
    int pom;
    while (b!=0) {
        pom=b;
        b=a%b
        a=pom;
    }
    return a;

}
struct wymierna {
    int licz;
    int mian;
}
int main() {
    wymierna a;
    int n;
    cin>>a.licz;
    cin>>a.mian;
    n=NWD(a.licz,a.mian)
    a.licz=a.licz/n;
    a.mian=a.mian/n;
    cout<<a.licz<<"/"<<a.mian;
    return 0;

}