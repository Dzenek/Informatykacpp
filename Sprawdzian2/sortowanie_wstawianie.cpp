using namespace std;
void Sortuj(int A[]) {
    int i, j;
    for (i=2;i<=N;i++)
    {
        A[0]=A[i];
        j=i-1;
        while (A[j]>A[0])
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=A[0];
    }
}