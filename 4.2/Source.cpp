#include <iostream>
#include <fstream>

using namespace std;



int main() {
	fstream f("t.txt");
	char ch;
	int k = 0;
	bool wordBegin = true;
	while (!f.eof()) {
		f.get(ch);

		if (wordBegin==true && ch != ' ') {
			k++;
			wordBegin = false;
		}
		else if (ch == ' ') {
			wordBegin = true;
		}
		
	}
	cout << k << endl;
}
