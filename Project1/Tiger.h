#pragma once
#include <iostream>
#include <string>

class Tiger
{
public:
	Tiger(){}

	int getHeight();
	
	void setHeight(int height);

private: // ¬ привате все названи€ начинать с _ (земл€)
	int _height;
	std::string _name;
	std::string _color;
};

