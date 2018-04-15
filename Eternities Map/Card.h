#pragma once

#include <string>

class Card
{
private:
	std::string name;
public:
	Card(std::string name);

	std::string getName() { return name; }
	void setName(std::string name) { this->name = name; }

};

