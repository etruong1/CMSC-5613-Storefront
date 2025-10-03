#ifndef COLOR_H
#define COLOR_H

#include <string>

class IColor {

public:
	virtual ~IColor() = default;
	virtual int calcColorQuantity() = 0;
};

class Color {

private:
	std::string colorName;
	std::string image;
	int colorQuantity;

public:
	int calcColorQuantity();
};

#endif
