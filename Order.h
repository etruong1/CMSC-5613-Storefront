#ifndef ORDER_H
#define ORDER_H

class Order {

private:
	String orderID;
	date date;
	float cost;
	String deliveryMethod;
	String paymentMethod;
	String status;

public:
	void calcSubtotal();

	void calcShippingCost();

	void calcTax();

	void calcTotalCost();

	void applyCoupon();

	void setStatus(String s);
};

#endif
