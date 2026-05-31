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
wymierna Dodaj(wymierna a, wymierna b) {
    wymierna c;
    int nwd1=NWD(a.mian,a.licz);
    c.licz=a.licz*(b.mian/nwd1)+b.licz*(a.mian/nwd1);
    int nwd2 = NWD(abs(c.licz), nwd1);
    c.licz=c.licz/nwd1;
    c.mian=(a.mian/nwd1)*(b.mian/nwd2);
    return c;

}