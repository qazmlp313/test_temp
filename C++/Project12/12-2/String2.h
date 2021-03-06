#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String {
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char* s);
	String();
	String(const String &st);
	~String();

	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i) const;
	void stringlow();
	void stringup();
	int has(char ch);

	friend String operator+(const String& st1, const String& st2);
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend ostream& operator<<(ostream & os, const String& st);
	friend istream& operator>>(istream& is, String& st);

	static int HowMany();
};
#endif 