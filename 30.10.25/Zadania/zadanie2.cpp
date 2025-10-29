#include <iostream>
using namespace std;

int main() {
    int liczba = 2;        
    int znalezione = 0;    

    while (znalezione < 30) {  
        bool pierwsza = true;

       
        for (int i = 2; i < liczba; i++) {
            if (liczba % i == 0) {
                pierwsza = false;
                break; 
            }
        }

       
        if (pierwsza) {
            cout << liczba << " ";
            znalezione++;
        }

        liczba++; 
    }

    cout << endl;
    return 0;
}
