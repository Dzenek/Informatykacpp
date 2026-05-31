void MiniMaks(int A[], int &mini, int &maks)
{
    if (A[0] > A[1])
    {
        mini = A[1];
        maks = A[0];
    }
    else
    {
        mini = A[0];
        maks = A[1];
    }

    for (int i = 2; i < N - 1; i += 2)
        if (A[i] > A[i + 1])
        {
            if (A[i + 1] < mini) mini = A[i + 1];
            if (A[i] > maks) maks = A[i];
        }
        else
        {
            if (A[i] < mini) mini = A[i];
            if (A[i + 1] > maks) maks = A[i + 1];
        }
}

void ZnajdzMinimum(int A[], int &mini)
{
    // Zakładamy na początku, że pierwszy element jest najmniejszy
    mini = A[0]; 

    // Przeglądamy tablicę od drugiego elementu (indeks 1) do końca
    for (int i = 1; i < N; i++)
    {
        if (A[i] < mini) 
        {
            mini = A[i]; // Znaleźliśmy coś mniejszego, aktualizujemy rekord
        }
    }
}

void ZnajdzMinimum(int A[], int &mini)
{
    // Zakładamy na początku, że pierwszy element jest najmniejszy
    mini = A[0]; 

    // Przeglądamy tablicę od drugiego elementu (indeks 1) do końca
    for (int i = 1; i < N; i++)
    {
        if (A[i] < mini) 
        {
            mini = A[i]; // Znaleźliśmy coś mniejszego, aktualizujemy rekord
        }
    }
}