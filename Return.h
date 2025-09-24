#ifndef RETURN_H
#define RETURN_H

class Return {

private:
	String returnID;
	String returnMethod;
	float shippingCost;
	String comment;

public:
	void calcShippingCost();
};

#endif
