#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int N = 5;

void Sortuj(int A[]) {
	int i, j;
	for (i=2;i<=N;i++) {
		A[0]=A[i];
		j=i-1;
		while (A[j]>A[0]) {
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=A[0];
	}
}
void Losuj(int A[]) {
	for(int i = 1; i<N+1;i++) A[i]=rand()%100;
}
void Wypisz(int A[]) {
	for(int i = 1; i<N+1;i++) cout<<A[i]<< " ";
	cout<<endl;
}

int main() {
	int A[N+1];
	srand(time(NULL));
	Losuj(A);
	Wypisz(A);
	Sortuj(A);
	Wypisz(A);
	return 0;
}