#ifndef RETURN_H
#define RETURN_H

#include <string>

class Return {

private:
	std::string returnID;
	std::string returnMethod;
	float shippingCost;
	std::string comment;

public:
	void calcShippingCost();
};

#endif
