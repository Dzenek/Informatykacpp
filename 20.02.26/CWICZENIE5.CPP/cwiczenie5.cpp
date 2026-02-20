#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string Cezar(string s, int klucz) {

    string szyfrogram = "";

    int kod;

    for (int i = 0; i < s.size(); i++) {
        if (toupper(s[i]) >= 'A' && toupper(s[i]) <= 'Z') {
            kod = s[i] + klucz;
            if ((s[i] <= 'Z' && kod > 'Z') || (s[i] >= 'a' && kod > 'z')) {
                kod = kod - 26;
            }
            szyfrogram = szyfrogram + (char)kod;

        } else {
            szyfrogram = szyfrogram + s[i];
        }
    }
    return szyfrogram;
}
int main() {

    int klucz;

    string linia;
    cout << "Podaj klucz (1-25): ";

    cin >> klucz;


    ifstream wejscie("tekst_jawny.txt");   

    ofstream wyjscie("szyfrogram.txt");  


    if (!wejscie.is_open()) {

        cout << "Blad: Nie mozna otworzyc pliku tekst_jawny.txt!" << endl;

        return 1;
    }

    while (!wejscie.eof()) {

        getline(wejscie, linia);        

        string zaszyfrowana = Cezar(linia, klucz);

        wyjscie << zaszyfrowana << endl;   

    }


    wejscie.close();
    wyjscie.close();
    cout << "Proces szyfrowania zakonczyl sie pomyslnie." << endl; 
    return 0;

}
 