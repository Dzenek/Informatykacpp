#include <iostream>

using namespace std;
void Sortuj(int A[])
{
	int N = 4;
	int i, j, pom;
	for(i=1;i<N;i++) {
		for(j=0;j<N-i;j++)
			if(A[j]>A[j+1])  {
				pom=A[j];
				A[j]=A[j+1];
				A[j+1]=pom;
			}
	}
}

int main() {
	int A[] = {2,1,3,7}
	cout<<Sortuj(A[]);
}