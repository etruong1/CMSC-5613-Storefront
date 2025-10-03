#ifndef ORDER_H
#define ORDER_H

#include <string>

class IOrder {

public:
	virtual ~IOrder() = default;
	virtual float calcSubtotal() = 0;
};

class Order {

private:
	std::string orderID;
	time_t date;
	float cost;
	std::string deliveryMethod;
	std::string paymentMethod;
	std::string status;
	IOrder* iOrder;

public:
	Order() {}

	Order(std::string orderID, time_t date, float cost, std::string deliveryMethod, 
	std::string paymentMethod, std::string , IOrder* iOrder) : orderID{orderID}, date{date}, cost{cost},
	deliveryMethod{deliveryMethod}, paymentMethod{paymentMethod}, status{status}, iOrder{iOrder} {}

	float calcSubtotal();

	float calcShippingCost();

	float calcTax();

	void calcTotalCost();

	void applyCoupon();

	void setStatus(std::string s);
};

#endif
