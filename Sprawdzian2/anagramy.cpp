void Zlicz(string s, int Ile[])
{
    for (int i=0;i<26;i++) Ile[i]=0;
    for (int i=0;i<s.size();i++) Ile[s[i]-'A']++;
}
//wersja 1
bool Anagramy(string s1, string s2)
{
    int Ile1[26], Ile2[26];
    if (s1.size()!=s2.size()) return false;
    Zlicz(s1,Ile1); Zlicz(s2,Ile2);
    for (int i=0;i<26;i++)
        if (Ile1[i]!=Ile2[i]) return false;
    return true;
}
//wersja 2 
bool Anagramy(string s1, string s2)
{
    if (s1.size()!=s2.size()) return false;
    Sortuj(s1); Sortuj(s2);
    return (s1==s2);
}