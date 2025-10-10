#include <iostream>
#include <string>

using namespace std;

int main() {
	string wyraz;
	int i= 0, j;
	bool palindrom = true;
	cout<<"Podaj wyraz: ";cin>>wyraz;
	j=wyraz.size()-1;
	while (palindrom && i<j){
		if(toupper(wyraz[i])==toupper(wyraz[j])) {
			i++;
			j--;
		}
		else palindrom = false;
	if (palindrom) cout<<"tak";
	else cout<<"nie";
	return 0;
	
	}
}