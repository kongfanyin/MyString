#define _CRT_SECURE_NO_WARNINGS 1
#include"stringbad.h"
using std::cout;
//initializing static class member
int stringbad::num_strings = 0;
stringbad::stringbad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
}
stringbad::stringbad(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings << ":\"" << str << "\" default object created\n";
}
stringbad::~stringbad()//necessary destructor
{
	cout << "\"" << str << "\"object deleted\n";
	--num_strings;
	cout << num_strings << "lefted\n";
	delete [] str;
}
std::ostream& operator<<(std::ostream &os, const stringbad &str)
{
	os << str.str;
	return os;
}