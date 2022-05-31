#include <iostream>
#include <fstream>

using namespace std;



int main() {
	fstream f("t.txt");
	char ch;
	int k = 1;
	while (!f.eof()) {
		f.get(ch);
		if (ch == ' ') {
			k++;
		}
	}
	cout << k << endl;
}
