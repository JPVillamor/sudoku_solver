#include <iostream>
#include <string>
using namespace std;

bool isRepeat(string s, char c) {
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (c == s[i])
			count++;
	}
	if (count > 1)
		return true;
	else
		return false;
}

int main() {
	// initialize each spot to blank	
	string rows[9], cols[9]; 
	for (int i = 0; i < 9; i++) {
		rows[i] = "#########";
		cols[i] = rows[i];
	}
	
	// display board:
	for (int i = 0; i < 9; i++) {
		cout << rows[i] << endl;
	}

	
	return 0;
}
