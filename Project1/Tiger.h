#pragma once
#include <iostream>
#include <string>

class Tiger
{
public:
	Tiger(){}

	int getHeight();
	
	void setHeight(int height);

private: // � ������� ��� �������� �������� � _ (�����)
	int _height;
	std::string _name;
	std::string _color;
};

