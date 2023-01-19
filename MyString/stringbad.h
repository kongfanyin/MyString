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
	static int num_strings;//��̬�洢���ڶ��д������ɳ����ͷţ��������ӣ���̬��Ա�����ڹ���;�������������ʼ����ͳ�ƴ����ַ�������
};


#endif // !STRING_H

