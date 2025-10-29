#include <iostream>
using namespace std;

int main() {
    for (int n = 2; n < 100; n++) {
        bool pierwsza = true; 

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                pierwsza = false; 
                break; 
            }
        }

     
        if (pierwsza) {
            cout << n << " ";
        }
    }

    cout << endl;
    return 0;
}
