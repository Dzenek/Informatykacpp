#include <iostream>
using namespace std;
const int N = 6;
void Sortuj(int A[])
{
    int i, j, pom;
    for (i=1;i<N;i++) {
        for (j=0;j<N-i;j++) {
            if(A[j]>A[j+1])
            {
                pom=A[j];
                A[j]=A[j+1];
                A[j+1]=pom;
            }
        }
    }
}
