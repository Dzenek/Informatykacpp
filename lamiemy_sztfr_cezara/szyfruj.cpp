void Szyfruj(int klucz)
{
    string s;
    ifstream wejscie("t_zaszyfrowany.txt");
    ofstream wyjscie("t_odszyfrowany.txt");
    while (!wejscie.eof())
    {
        getline(wejscie, s);
        wyjscie << Cezar(s, klucz) << endl;
    }
    wejscie.close(); wyjscie.close();
}

int main()
{
    Szyfruj(35 - ZnajdzKlucz());
    cout << "Plik t_odszyfrowany.txt zostal utworzony!";
    return 0;
}