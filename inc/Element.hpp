#ifndef _ELEMENT_H_
#define _ELEMENT_H_

#include "Project.hpp"

class Element
{
public:
	Element(int value);
	Element(std::string value);
	Element(float value);
	Element();
	~Element();
private:
	std::string fieldValue;
	int fieldWidth;
protected:


};


#endif
