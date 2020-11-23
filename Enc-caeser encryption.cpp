#include <iostream>
#include <string>
using namespace std;



string ceaser_encryption(string letters, int key) {
	unsigned int i;
	key = key % 26;
	for (i = 0; i < letters.size(); i++) {
		letters[i] = (letters[i] - 97 + key) % 26 + 97;
	}
	
	return letters;
}

int main()
{
	string letters;
	int key;
	cout << "Enter letters:" << endl;
	getline(cin, letters);
	cout << "Enter a key for ceaser encryption:" << endl;
	cin >> key;
	cout << ceaser_encryption(letters,key);
}
