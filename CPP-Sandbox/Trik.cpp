#include <iostream>
#include <string>
using namespace std;
// Kattis problem can be found here: https://open.kattis.com/problems/trik
void main() {
	string shuffle;
	int cup [3] = {1,0,0};
	int temp;
	cout << "Please enter a shuffle pattern: ";
	getline(cin, shuffle);
	for (char& c : shuffle) {
		if (c == 'A') {
			temp = cup[0];
			cup[0] = cup[1];
			cup[1] = temp;
		}
		else if (c == 'B') {
			temp = cup[1];
			cup[1] = cup[2];
			cup[2] = temp;
		}
		else {
			temp = cup[2];
			cup[2] = cup[0];
			cup[0] = temp;
		}
	}
	for (int i = 0; i < sizeof(cup) - 1; i++) {
		if (cup[i] == 1) {
			cout << "The ball is in cup: " << (i + 1);
		}
	}
}