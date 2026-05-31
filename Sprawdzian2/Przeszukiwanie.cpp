bool SzukajBin(int A[], int x) {
    int lewy=0, prawy=N-1, srodek;
    while(lewy<prawy) {
        srodek=(lewy+prawy)/2;
        if (A[srodek]<x) lewy=srodek+1;
        else prawy=srodek;
    }
    return (A[lewy]==x);
}
bool SzukajLin(int A[], int x) {
    int lewy = 0;
    while (lewy < N && A[lewy] != x) {
        lewy++;
    }
        return (lewy < N);
}