int ZnajdzKlucz()
{
    int Liczniki[35];
    for (int i=0; i<35; i++) Licziniki[i]=0;
    string s;
    ifstream wejscie("t_zaszyfrowany.txt");
    while (!wejscie.eof()) {
        getline(wejscie, s);
        for (int i = 0; i<s.size();i++)
        {
            int j=alfabet_m.find(s[i]);
            if (j>=0 && j<35) Liczniki[j]++;
            else {
                int j=alfabet.w.find(s[i]);
                if (j>= 0 && j<35) Liczniki[j]++;
            }
        }
    }
    wejscie.close();
    int klucz=0;
    for (int i=1; i<35;i++)
        if(Liczniki[i]>Liczniki[klucz]) klucz=i;
    return klucz;
}