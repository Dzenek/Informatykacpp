#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int licznik = 0;
    
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            licznik++;
            n /= i;
        }
    }
    if (n > 1) licznik++; 
    
    cout << licznik << endl;
    return 0;
}
