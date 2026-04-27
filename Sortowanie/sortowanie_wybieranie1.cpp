void Sortuj(int A[])
{
    int i, j, m, pom;
    for (i=0;i<N-1;i++)
    {
        m=i;
        for (j=i+1;j<N;j++) {
            if (A[j]<A[m]) m=j;
            pom = A[I];
            A[i]=A[m];
            A[m]=pom;
        }
    }
}