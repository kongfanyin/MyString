#pragma once


#ifndef STRING_H
#define STRING_H
#include<iostream>

class stringbad
{
public:
	stringbad();
	stringbad(const char* s);
	~stringbad();
	//friend 
	friend std::ostream& operator<<(std::ostream &os, const stringbad &str);
private:
	char* str;
	int len;
	static int num_strings;//静态存储（在堆中创建，由程序释放），无链接；静态成员，类内共享;类内声明类外初始化。统计创建字符串总数
};


#endif // !STRING_H

