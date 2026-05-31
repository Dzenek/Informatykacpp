int main() {
    string t_jawny, szyfrogram="";
    int i, klucz;
    int kod;
    cin>>t_jawny;
    cin>>klucz;
    for(i=0;j<t_jawny.size();i++)
    {
        kod = t_jawny[i]+klucz;
        if (kod>'Z') kod=kod-26;
        szyfrogram=szyfrogram+char(kod);

    }
    cout<<szyfrogram;
    return 0;
}