#define _CRT_SECURE_NO_WARNINGS 1


#include<string>
#include<fstream>
#include<iostream>
#include"stringbad.h"
using std::cout;
void callme1(stringbad &);
void callme2(stringbad);
int main(char argc, char** argv)
{
	using std::endl;
	{
		cout << "starting an inner block.\n";
		stringbad headline1("celery stalk at night");
		stringbad headline2("lettue prey");
		stringbad sport("spinach leaves bowl for dollars");
		cout << "headline1" << headline1 << endl;
		cout << "headline2" << headline2 << endl;
		cout << "sport:" << sport << endl;
		callme1(headline1);
		cout << "headline1" << headline1 << endl;
		callme2(headline2);
		cout << "headline2" << headline2 << endl;
		cout << "initialize one object to another:\n";
		stringbad sailor = sport;
		cout << "sailor:" << sailor << endl;
		cout << "assign one object to another:\n";
		stringbad knot;
		knot = headline1;
		cout << "kont:" << knot << endl;
		cout << "exit the block";
	}
	cout << "end of main\n";
	return 0;
}
void callme1(stringbad &str)
{
	cout << "string passed by reference: \n";
	cout << "         \"" << str << "\"\n";
}
void callme2(stringbad str)
{
	cout << "string passed by value:\n";
	cout << "        \"" << str << "\"\n";
}