#include "Order.h"
#include <ctime>

float Order::calcSubtotal() {
	// TODO - implement Order::calcSubtotal
	throw "Not yet implemented";
}

float Order::calcShippingCost() {
	// If subtotal is over $100, no shipping cost
	if (iOrder->calcSubtotal() > 100.0)
	{
		return 0.0;
	}
	// Else, set shipping cost to default of $7.0
	else
	{
		return 7.0;
	}
}

float Order::calcTax() {
	// TODO - implement Order::calcTax
	throw "Not yet implemented";
}

void Order::calcTotalCost() {
	// TODO - implement Order::calcTotalCost
	throw "Not yet implemented";
}

void Order::applyCoupon() {
	// TODO - implement Order::applyCoupon
	throw "Not yet implemented";
}

void Order::setStatus(std::string s) {
	this->status = s;
}
