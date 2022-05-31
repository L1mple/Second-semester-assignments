#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int mainnnn() {
	string str = "Two Three Zero";
	char s[15] = {'T','w','o',' ','T','h','r','e','e',' ','Z','e','r','o'};
	char newstr[15];
	char count;
	const char z = ' ';
	cout << "1 или 2 способ" << endl;
	cin >> count;
	switch (count) {
	case '1':
		int i;
		i = str.find(' ');
		while (i != (-1)) {
			str.erase(i, 1);
			i = str.find(' ');
		}
		cout<<str<<endl;
		break;
	case '2':
		for (int k = 0; k < 15; k++) {
			if (s[k] != z) {
				newstr[k] = s[k];
			};

		}
		puts(newstr);
		break;
	default: cout<< "1 или 2"<< endl;
		break;
	}
	return 0;
}