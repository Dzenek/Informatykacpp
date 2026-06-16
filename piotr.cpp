Zad 1
#include <iostream>
 
using namespace std;
 
int NWD(int a, int b) {
int pom;
while (b != 0) {
pom = b;
b = a % b;
a = pom;
}
return a;
}
 
struct wymierna {
int licz;
int mian;
};
 
int main() {
wymierna a;
int n;
cin >> a.licz;
cin >> a.mian;
n = NWD(a.licz, a.mian);
a.licz = a.licz / n;
a.mian = a.mian / n;
cout << a.licz << "/" << a.mian;
return 0;
}
Zad 2
#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void Zlicz(string s, int Ile[])
{
for (int i = 0; i < 26; i++) Ile[i] = 0;
for (size_t i = 0; i < s.size(); i++) {
if (s[i] >= 'A' && s[i] <= 'Z') {
Ile[s[i] - 'A']++;
}
}
}
 
bool Anagramy(string s1, string s2)
{
if (s1.size() != s2.size()) return false;
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
return (s1 == s2);
}
Zad 3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
const int N = 10;
 
void Losuj(int A[])
{
for (int i = 0; i < N; i++) A[i] = rand() % 100;
}
 
void Wypisz(int A[])
{
for (int i = 0; i < N; i++) cout << A[i] << " ";
cout << endl;
}
 
int main()
{
int A[N];
srand(time(NULL));
Losuj(A);
Wypisz(A);
 
int mini = A[0];
for (int i = 1; i < N; i++)
if (A[i] < mini) mini = A[i];
 
int maks = A[0];
for (int i = 1; i < N; i++)
if (A[i] > maks) maks = A[i];
 
cout << "Minimum: " << mini << endl;
cout << "Maksimum: " << maks << endl;
return 0;
}
Zad 4
#include <iostream>
 
using namespace std;
 
const int N = 10;
 
void Sortuj(int A[])
{
int i, j, pom;
for (i = 1; i < N; i++) {
for (j = 0; j < N - i; j++) {
if (A[j] > A[j + 1]) {
pom = A[j];
A[j] = A[j + 1];
A[j + 1] = pom;
}
}
}
}
 
int main() {
int A[N];
 
for (int i = 0; i < N; i++) {
cin >> A[i];
}
 
Sortuj(A);
 
for (int i = 0; i < N; i++) {
cout << A[i] << " ";
}
 
return 0;
}
Zad 5
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
string w;
int k;
 
cin >> w;
cin >> k;
 
k = k % 26;
if (k < 0) {
k += 26;
}
 
for (size_t i = 0; i < w.size(); i++) {
if (w[i] >= 'a' && w[i] <= 'z') {
w[i] = (w[i] - 'a' + k) % 26 + 'a';
}
else if (w[i] >= 'A' && w[i] <= 'Z') {
w[i] = (w[i] - 'A' + k) % 26 + 'A';
}
}
 
cout << w;
 
return 0;
}
Zad1.2
#include <iostream>
#include <cmath>
using namespace std;
 
struct wymierna
{
int licz;
int mian;
};
 
int NWD(int a, int b)
{
int pom;
while (b != 0)
{
pom = b;
b = a % b;
a = pom;
}
return abs(a);
}
 
void PiszUlamek(wymierna a)
{
cout << a.licz;
if (a.mian != 1 && a.mian != 0)
cout << "/" << a.mian;
}
 
int main()
{
wymierna a, b, c_przed, c_po;
 
cin >> a.licz;
cin >> a.mian;
 
cin >> b.licz;
cin >> b.mian;
 
c_przed.licz = a.licz * b.mian + b.licz * a.mian;
c_przed.mian = a.mian * b.mian;
 
int n = NWD(c_przed.licz, c_przed.mian);
c_po.licz = c_przed.licz / n;
c_po.mian = c_przed.mian / n;
 
PiszUlamek(c_przed);
cout << endl;
PiszUlamek(c_po);
cout << endl;
 
return 0;
}
 
Zad 2
#include <iostream>
#include <string>
 
using namespace std;
 
void Sortuj(string &s)
{
int n = s.size();
for (int i = 0; i < n - 1; i++)
{
int m = i;
for (int j = i + 1; j < n; j++)
{
if (s[j] < s[m])
m = j;
}
char ch = s[i];
s[i] = s[m];
s[m] = ch;
}
}
 
bool Anagramy(string s1, string s2)
{
if (s1.size() != s2.size())
return false;
 
Sortuj(s1);
Sortuj(s2);
 
return (s1 == s2);
}
 
int main()
{
string s1, s2;
 
cin >> s1;
cin >> s2;
 
if (Anagramy(s1, s2))
cout << "TAK" << endl;
else
cout << "NIE" << endl;
 
return 0;
}
Zad 3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
const int N = 10;
 
void Losuj(int A[])
{
for (int i = 0; i < N; i++) A[i] = rand() % 100;
}
 
void Wypisz(int A[])
{
for (int i = 0; i < N; i++) cout << A[i] << " ";
cout << endl;
}
 
int main()
{
int A[N];
srand(time(NULL));
Losuj(A);
Wypisz(A);
 
int mini = A[0];
for (int i = 1; i < N; i++)
if (A[i] < mini) mini = A[i];
 
int maks = A[0];
for (int i = 1; i < N; i++)
if (A[i] > maks) maks = A[i];
 
cout << "Minimum: " << mini << endl;
cout << "Maksimum: " << maks << endl;
return 0;
}
Zad 4bubble sort
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
const int N = 10;
 
void Losuj(int A[])
{
for (int i = 0; i < N; i++) A[i] = rand() % 100;
}
 
void Wypisz(int A[])
{
for (int i = 0; i < N; i++) cout << A[i] << " ";
cout << endl;
}
 
void Sortuj(int A[])
{
int i, j, pom;
for (i = 1; i < N; i++)
for (j = 0; j < N - i; j++)
if (A[j] > A[j + 1])
{
pom = A[j];
A[j] = A[j + 1];
A[j + 1] = pom;
}
}
 
int main()
{
int A[N];
srand(time(NULL));
Losuj(A);
Wypisz(A);
Sortuj(A);
Wypisz(A);
return 0;
}
Zad 5
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
string w;
int k;
 
cin >> w;
cin >> k;
 
k = k % 26;
if (k < 0) {
k += 26;
}
 
for (size_t i = 0; i < w.size(); i++) {
if (w[i] >= 'a' && w[i] <= 'z') {
w[i] = (w[i] - 'a' + k) % 26 + 'a';
}
else if (w[i] >= 'A' && w[i] <= 'Z') {
w[i] = (w[i] - 'A' + k) % 26 + 'A';
}
}
 
cout << w;
 
return 0;
}