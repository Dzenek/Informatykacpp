#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;
int main() {
    string alfabet = "aąbcćdeęfghijklłmnńoópqrsśtuvwxyzźż";
    map<char, int> licznik;
    for (char litera : alfabet) {
        licznik[litera] = 0;
    }
    ifstream plik("p_liczanie.txt");
    ofstream wynik("wyniki_polski.txt");
    char znak;
    if (!plik) {
        cout << "Nie mozna otworzyc pliku." << endl;
        return 1;
    }
    while (plik.get(znak)) {
        znak = tolower(znak);
 
        if (licznik.count(znak)) {
            licznik[znak]++;
        }
    }
    for (char litera : alfabet) {
        wynik << litera << ": " << licznik[litera] << endl;
    }
    plik.close();
    wynik.close();
    cout << "Zliczanie zakonczone." << endl;
    return 0;
}