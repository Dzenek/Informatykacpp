#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int licznik = 0;
    
    for (int i = 2; i * i <= n; i++) {
        bool znaleziony = false;
        while (n % i == 0) {
            znaleziony = true;
            n /= i;
        }
        if (znaleziony) licznik++; 
    }
    if (n > 1) licznik++; 
    
    cout << licznik << endl;
    return 0;
}
