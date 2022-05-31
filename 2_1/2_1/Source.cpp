#include <cstring>
#include <cstddef>
#include <iostream>



using namespace std;



struct String {
	// Construct
	explicit String(size_t n, char c) {
		size_t size = n;
		char* str = new char[size+1];
		for (size_t i = 0; i < (n+1); i++) {
			str[i] = c;
		}
		str[size] = '0';
		this -> str = str;
		this -> size = size;
	};


	// Destruct
	~String() {
		delete[] str;
	}

	void append(String & s2)
	{
		size_t newsize = (s2.size) + (this -> size) + 1;
		char* stroka = new char[newsize];
		for (size_t i = 0; i < (this -> size); i++)
			stroka[i] = str[i];
		for (size_t i = 0; i < s2.size; i++)
			stroka[(this -> size) + i] = s2.str[i];
		stroka[size + s2.size] = '0';

		delete[] str;
		str = stroka;
		size = newsize;
	}

	// Контсруктор копирования
	String(const String& other) { 
		this -> size = other.size;
		this -> str = new char[size];
		for (size_t i = 0; i != (size + 1); i++) {
			str[i] = other.str[i];
		}
	}


	// Оператор присваивания
	String &operator=(const String& other) {
		if (this != &other) {
			delete[] str;
			size = other.size;
			str = new char[size];
			for (size_t i = 0; i != (size + 1); i++) {
				str[i] = other.str[i];
			}
			str[other.size] = '0';
		}
	}
	
	
	size_t size;
	char* str;
};

int main() {
	String s1(4, 'v');
	String s2(12, 'b');
	s1.append(s2);
	for (int i = 0; i != 16; i++) {
		cout << s1.str[i];
	}
	return 0;
}