#include <iostream>

using namespace std;

string reverse(string S) {
    int l =S.size() - 1;
	for(int i = 0;i<l;i++) {
	   swap(S[i],S[l--]);
    }
	
	return S;
}

int main() {
	string s;
	cin >> s;
	
	cout << reverse(s);
	
	return 0;
}
	
